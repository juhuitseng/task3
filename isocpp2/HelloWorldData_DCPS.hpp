#ifndef ISOCPP2_HELLOWORLDDATA_H
#define ISOCPP2_HELLOWORLDDATA_H

#include "dds/dds.hpp"

#include "HelloWorldData.h"
#include "HelloWorldDataSplDcps.h"

#include "org/opensplice/topic/TopicTraits.hpp"
#include "org/opensplice/topic/DataRepresentation.hpp"

namespace org { namespace opensplice { namespace topic {
template <>
class TopicTraits<HelloWorldData::Msg>
{
public:
    static ::org::opensplice::topic::DataRepresentationId_t getDataRepresentationId()
    {
        return ::org::opensplice::topic::OSPL_REPRESENTATION;
    }

    static ::std::vector<os_uchar> getMetaData()
    {
        return ::std::vector<os_uchar>();
    }

    static ::std::vector<os_uchar> getTypeHash()
    {
        return ::std::vector<os_uchar>();
    }

    static ::std::vector<os_uchar> getExtentions()
    {
        return ::std::vector<os_uchar>();
    }

    static const char *getKeyList()
    {
        return "userID";
    }

    static const char *getTypeName()
    {
        return "HelloWorldData::Msg";
    }

    static std::string getDescriptor()
    {
        const char *elements[] = {
            "<MetaData version=\"1.0.0\"><Module name=\"HelloWorldData\"><Struct name=\"Msg\"><Member name=\"userID\">",
"<Long/></Member><Member name=\"message\"><String/></Member></Struct></Module></MetaData>"
        };
        std::string descriptor;
        descriptor.reserve(193);
        for (int i = 0; i < 2; i++) {
            descriptor.append(elements[i]);
        }

        return descriptor;
    }

    static copyInFunction getCopyIn()
    {
        return (copyInFunction) __HelloWorldData_Msg__copyIn;
    }

    static copyOutFunction getCopyOut()
    {
        return (copyOutFunction) __HelloWorldData_Msg__copyOut;
    }
};
}}}

namespace dds { namespace topic {
template <>
struct topic_type_name<HelloWorldData::Msg>
{
    static std::string value()
    {
        return org::opensplice::topic::TopicTraits<HelloWorldData::Msg>::getTypeName();
    }
};
}}

REGISTER_TOPIC_TYPE(HelloWorldData::Msg)

#endif /* ISOCPP2_HELLOWORLDDATA_H */
