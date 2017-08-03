/*
 *                         OpenSplice DDS
 *
 *   This software and documentation are Copyright 2006 to 2017 PrismTech
 *   Limited and its licensees. All rights reserved. See file:
 *
 *                     $OSPL_HOME/LICENSE
 *
 *   for full copyright notice and license terms.
 *
 */

import java.util.ArrayList;
import java.util.List;
import java.util.HashSet;
import java.util.Collection;

import org.omg.dds.core.ServiceEnvironment;
import org.omg.dds.core.policy.Durability;
import org.omg.dds.core.policy.Partition;
import org.omg.dds.core.policy.PolicyFactory;
import org.omg.dds.core.policy.Reliability;
import org.omg.dds.core.status.Status;
import org.omg.dds.domain.DomainParticipant;
import org.omg.dds.domain.DomainParticipantFactory;
import org.omg.dds.sub.DataReader;
import org.omg.dds.sub.Sample;
import org.omg.dds.sub.Subscriber;
import org.omg.dds.topic.Topic;

import HelloWorldData.Msg;

public class HelloWorldDataSubscriber {

    public static void main(String[] args) {
        // Set "serviceClassName" property to OpenSplice implementation
        System.setProperty(
                ServiceEnvironment.IMPLEMENTATION_CLASS_NAME_PROPERTY,
                "org.opensplice.dds.core.OsplServiceEnvironment");

        // Instantiate a DDS ServiceEnvironment
        ServiceEnvironment env = ServiceEnvironment
                .createInstance(HelloWorldDataSubscriber.class.getClassLoader());

        // Get the DomainParticipantFactory
        DomainParticipantFactory dpf = DomainParticipantFactory
                .getInstance(env);

        // Create a DomainParticipant with default domainID
        DomainParticipant p = dpf.createParticipant();

        // Create Reliability and Durability QoS
        Reliability r = PolicyFactory.getPolicyFactory(env).Reliability()
                .withReliable();
        Durability d = PolicyFactory.getPolicyFactory(env).Durability()
                .withTransient();

        // Create a Topic named "HelloWorldData_Msg" and with
        // "HelloWorldData.Msg" as a type.
        Collection<Class<? extends Status>> statuses = new HashSet<Class<? extends Status>>();
        Topic<Msg> topic = p.createTopic("HelloWorldData_Msg", Msg.class, p.getDefaultTopicQos().withPolicies(r, d), null , statuses);

        // Create a Partition QoS with "HelloWorld example" as partition.
        Partition partition = PolicyFactory.getPolicyFactory(env).Partition()
                .withName("HelloWorld example");

        // Create a Subscriber using default QoS except partition
        Subscriber sub = p.createSubscriber(p.getDefaultSubscriberQos()
                .withPolicy(partition));

        // Create DataReader on our topic with default QoS except Reliability
        // and Durability
        DataReader<Msg> reader = sub.createDataReader(topic, sub
                .getDefaultDataReaderQos().withPolicies(r, d));

        // Prepare a List of Sample<Msg> for received samples
        List<Sample<Msg>> samples = new ArrayList<Sample<Msg>>();

        // Try to take samples every seconds. We stop as soon as we get some.
        while (samples.size() == 0) {
            reader.take(samples);
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                // nothing
            }
        }
        System.out
                .println(" ________________________________________________________________");
        System.out.println("|");
        System.out.println("| Received message : "
                + samples.get(0).getData().message);
        System.out
                .println("|________________________________________________________________");
        System.out.println("");

        // Close Participant (closing also chlidren entities: Topic, Subscriber,
        // DataReader)
        p.close();

    }
}
