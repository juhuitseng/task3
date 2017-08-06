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

/************************************************************************
 * LOGICAL_NAME:    HelloWorldDataSubscriber.cpp
 * FUNCTION:        OpenSplice HelloWorld example code.
 * MODULE:          HelloWorld for the C++ programming language.
 * DATE             September 2010.
 ************************************************************************
 *
 * This file contains the implementation for the 'HelloWorldDataSubscriber' executable.
 *
 ***/
#include <string>
#include <sstream>
#include <iostream>
#include <ctime>
#include "DDSEntityManager.h"
#include "ccpp_HelloWorldData.h"
#include "vortex_os.h"

#include "example_main.h"

using namespace DDS;
using namespace HelloWorldData;

/* entry point exported and demangled so symbol can be found in shared library */
extern "C"
{
    OS_API_EXPORT
    int HelloWorldDataSubscriber(int argc, char *argv[]);
}

int HelloWorldDataSubscriber(int argc, char *argv[])
{
    os_time delay_2ms = { 0, 2000000 };
    os_time delay_200ms = { 0, 200000000 };
    os_time delay_1s = { 1, 0 };

    MsgSeq msgList;
    SampleInfoSeq infoSeq;

    DDSEntityManager mgr;

    // create domain participant
    mgr.createParticipant("HelloWorld example");

    //create type
    MsgTypeSupport_var mt = new MsgTypeSupport();
    mgr.registerType(mt.in());

    //create Topic
    char topic_name[] = "HelloWorldData_Msg";
    mgr.createTopic(topic_name);

    //create Subscriber
    mgr.createSubscriber();
    mgr.createReader();
    DataReader_var dreader = mgr.getReader();
    MsgDataReader_var HelloWorldReader = MsgDataReader::_narrow(dreader.in());
    checkHandle(HelloWorldReader.in(), "MsgDataReader::_narrow");

    mgr.createPublisher();
    bool autodispose_unregistered_instances = false;
    mgr.createWriter(autodispose_unregistered_instances);
    DataWriter_var dwriter = mgr.getWriter();
    MsgDataWriter_var HelloWorldWriter = MsgDataWriter::_narrow(dwriter.in());

    cout << "=== [Subscriber] Ready ..." << endl;

    bool closed = false;
    ReturnCode_t status =  - 1;
    int count = 0;
    //me added
    string name, lastStr;
    time_t now_time;
    while(lastStr!="quit")
    {

        while (!closed && count < 100) // We dont want the example to run indefinitely
        {
            cout<<"reading..."<<endl;
            status = HelloWorldReader->read(msgList, infoSeq, LENGTH_UNLIMITED,
                                            ANY_SAMPLE_STATE, ANY_VIEW_STATE, ANY_INSTANCE_STATE);
            checkStatus(status, "msgDataReader::read");
            for (DDS::ULong j = 0; j < msgList.length(); j++)
            {
                cout << "=== [GET] message received :" << endl;
                cout << "    [GET] userID  : " << msgList[j].userID << endl;
                cout << "    [GET] username  : " << msgList[j].name << endl;
                cout << "    [GET] Message : \"" << msgList[j].message << "\"" << endl;
                closed = true;

                lastStr = msgList[j].message;
            }
            status = HelloWorldReader->return_loan(msgList, infoSeq);
            checkStatus(status, "MsgDataReader::return_loan");
            os_nanoSleep(delay_200ms);
            ++count;
        }
        os_nanoSleep(delay_2ms);
        closed=false; count=0;

        cout<<"Who are you?";
        getline(cin, name);
        cout<<"What do you want to say: ";
        getline(cin, lastStr);

        now_time = time(NULL) % 86400; //get the time(per per day) and use it as id(86400=60*60*24)

        Msg msgInstance; /* Example on Stack */
        msgInstance.userID = now_time;
        msgInstance.name = DDS::string_dup(&name[0]);
        msgInstance.message = DDS::string_dup(&lastStr[0]);
        cout << "=== [SEND] writing a message containing :" << endl;
        cout << "    [SEND] userID  : " << msgInstance.userID << endl;
        cout << "    [SEND] username  : " << msgInstance.name << endl;
        cout << "    [SEND] Message : \"" << msgInstance.message << "\"" << endl;

        status = HelloWorldWriter->write(msgInstance, DDS::HANDLE_NIL);
        checkStatus(status, "MsgDataWriter::write");
        os_nanoSleep(delay_1s);
    }


    //cleanup
    mgr.deleteWriter();
    mgr.deletePublisher();
    mgr.deleteReader();
    mgr.deleteSubscriber();
    mgr.deleteTopic();
    mgr.deleteParticipant();

    return 0;
}

int OSPL_MAIN (int argc, char *argv[])
{
    return HelloWorldDataSubscriber (argc, argv);
}
