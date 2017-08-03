#ifndef HELLOWORLDDATASPLTYPES_H
#define HELLOWORLDDATASPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "HelloWorldDataDcps.h"


extern c_metaObject __HelloWorldData_HelloWorldData__load (c_base base);

extern const char *HelloWorldData_Msg_metaDescriptor[];
extern const int HelloWorldData_Msg_metaDescriptorArrLength;
extern const int HelloWorldData_Msg_metaDescriptorLength;
extern c_metaObject __HelloWorldData_Msg__load (c_base base);
struct _HelloWorldData_Msg ;
extern  v_copyin_result __HelloWorldData_Msg__copyIn(c_base base, const void *from, void *to);
extern  void __HelloWorldData_Msg__copyOut(const void *_from, void *_to);
struct _HelloWorldData_Msg {
    c_long userID;
    c_string message;
};

#undef OS_API
#endif
