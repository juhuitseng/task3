#if defined (__cplusplus)
extern "C" {
#endif

#include "vortex_os.h"
#include "HelloWorldDataSplDcps.h"
#include "HelloWorldDataDcps.h"

/* Code generated in file: /home/dds/OvernightTests/overnight/ospli/tags/OSPL_V6_8_0-RC3/ubuntu1204-64/x86_64.linux-release-notest-inner/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 141 */
/* Code generated in file: /home/dds/OvernightTests/overnight/ospli/tags/OSPL_V6_8_0-RC3/ubuntu1204-64/x86_64.linux-release-notest-inner/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 147 */
#include <v_copyIn.h>
#include <v_topic.h>
#include <string.h>
#include <os_report.h>

/* Code generated in file: /home/dds/OvernightTests/overnight/ospli/tags/OSPL_V6_8_0-RC3/ubuntu1204-64/x86_64.linux-release-notest-inner/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 228 */
v_copyin_result
__HelloWorldData_Msg__copyIn(c_base base, const void *_from, void *_to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;

    const HelloWorldData_Msg *from = (const HelloWorldData_Msg *)_from;
    struct _HelloWorldData_Msg *to = (struct _HelloWorldData_Msg *)_to;
/* Code generated in file: /home/dds/OvernightTests/overnight/ospli/tags/OSPL_V6_8_0-RC3/ubuntu1204-64/x86_64.linux-release-notest-inner/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 535 */
/* Code generated in file: /home/dds/OvernightTests/overnight/ospli/tags/OSPL_V6_8_0-RC3/ubuntu1204-64/x86_64.linux-release-notest-inner/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 311 */
    to->userID = (c_long)from->userID;
/* Code generated in file: /home/dds/OvernightTests/overnight/ospli/tags/OSPL_V6_8_0-RC3/ubuntu1204-64/x86_64.linux-release-notest-inner/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 535 */
/* Code generated in file: /home/dds/OvernightTests/overnight/ospli/tags/OSPL_V6_8_0-RC3/ubuntu1204-64/x86_64.linux-release-notest-inner/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 317 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->name) {
/* Code generated in file: /home/dds/OvernightTests/overnight/ospli/tags/OSPL_V6_8_0-RC3/ubuntu1204-64/x86_64.linux-release-notest-inner/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 348 */
        to->name = c_stringNew_s(base, from->name);
        if (to->name == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'HelloWorldData::Msg.name' of type 'c_string' is NULL.");
        result = V_COPYIN_RESULT_INVALID;
    }
#else
    to->name = c_stringNew_s(base, from->name);
    if ((to->name != NULL) && (to->name == NULL)) {
        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
    }
#endif
/* Code generated in file: /home/dds/OvernightTests/overnight/ospli/tags/OSPL_V6_8_0-RC3/ubuntu1204-64/x86_64.linux-release-notest-inner/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 535 */
/* Code generated in file: /home/dds/OvernightTests/overnight/ospli/tags/OSPL_V6_8_0-RC3/ubuntu1204-64/x86_64.linux-release-notest-inner/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 317 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->message) {
/* Code generated in file: /home/dds/OvernightTests/overnight/ospli/tags/OSPL_V6_8_0-RC3/ubuntu1204-64/x86_64.linux-release-notest-inner/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 348 */
        to->message = c_stringNew_s(base, from->message);
        if (to->message == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'HelloWorldData::Msg.message' of type 'c_string' is NULL.");
        result = V_COPYIN_RESULT_INVALID;
    }
#else
    to->message = c_stringNew_s(base, from->message);
    if ((to->message != NULL) && (to->message == NULL)) {
        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
    }
#endif
/* Code generated in file: /home/dds/OvernightTests/overnight/ospli/tags/OSPL_V6_8_0-RC3/ubuntu1204-64/x86_64.linux-release-notest-inner/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 263 */
    (void) base;
    return result;
}

#include <dds_dcps_private.h>

void
__HelloWorldData_Msg__copyOut(const void *_from, void *_to);
void
__HelloWorldData_Msg__copyOut(const void *_from, void *_to)
{
    const struct _HelloWorldData_Msg *from = (const struct _HelloWorldData_Msg *)_from;
    HelloWorldData_Msg *to = (HelloWorldData_Msg *)_to;
    to->userID = (DDS_long)from->userID;
    DDS_string_replace (from->name ? from->name : "", &to->name);
    DDS_string_replace (from->message ? from->message : "", &to->message);
}

HelloWorldData_Msg *HelloWorldData_Msg__alloc (void)
{
    DDS_ReturnCode_t HelloWorldData_Msg__free (void *object);

    return (HelloWorldData_Msg *)DDS_alloc(sizeof(HelloWorldData_Msg), HelloWorldData_Msg__free);
}

DDS_ReturnCode_t HelloWorldData_Msg__free (void *object);
DDS_ReturnCode_t HelloWorldData_Msg__free (void *object)
{
    HelloWorldData_Msg *o = (HelloWorldData_Msg *)object;

    (void) o;

    DDS_string_clean (&o->name);
    DDS_string_clean (&o->message);
    return DDS_RETCODE_OK;
}

const char * HelloWorldData_Msg_metaDescriptor[] = {"<MetaData version=\"1.0.0\"><Module name=\"HelloWorldData\"><Struct name=\"Msg\"><Member name=\"userID\">",
"<Long/></Member><Member name=\"name\"><String/></Member><Member name=\"message\"><String/></Member></Struct>",
"</Module></MetaData>"};
const int  HelloWorldData_Msg_metaDescriptorArrLength = 3;
const int  HelloWorldData_Msg_metaDescriptorLength = 233;
#if defined (__cplusplus)
}
#endif
