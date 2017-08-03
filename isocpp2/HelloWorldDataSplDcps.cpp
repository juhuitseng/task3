#include "HelloWorldData_DCPS.hpp"

#include <v_copyIn.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

v_copyin_result
__HelloWorldData_Msg__copyIn(
    c_base base,
    const class ::HelloWorldData::Msg *from,
    struct _HelloWorldData_Msg *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    to->userID = (c_long)from->userID_;
#ifdef OSPL_BOUNDS_CHECK
        to->message = c_stringNew_s(base, from->message_.c_str());
        if(to->message == NULL) {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#else
            to->message = c_stringNew_s(base, from->message_.c_str());
            if(to->message == NULL) {
                result = V_COPYIN_RESULT_OUT_OF_MEMORY;
            }
#endif
    return result;
}

void
__HelloWorldData_Msg__copyOut(
    const void *_from,
    void *_to)
{
    const struct _HelloWorldData_Msg *from = (const struct _HelloWorldData_Msg *)_from;
    class ::HelloWorldData::Msg *to = (class ::HelloWorldData::Msg *)_to;
    to->userID((int32_t)from->userID);
    to->message(from->message ? from->message : "");
}

