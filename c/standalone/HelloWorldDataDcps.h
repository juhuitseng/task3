#ifndef HELLOWORLDDATADCPS_H
#define HELLOWORLDDATADCPS_H

#include <dds_primitive_types.h>


#ifndef _HelloWorldData_Msg_defined
#define _HelloWorldData_Msg_defined
#ifdef __cplusplus
struct HelloWorldData_Msg;
#else /* __cplusplus */
typedef struct HelloWorldData_Msg HelloWorldData_Msg;
#endif /* __cplusplus */
#endif /* _HelloWorldData_Msg_defined */
 HelloWorldData_Msg *HelloWorldData_Msg__alloc (void);

struct HelloWorldData_Msg {
    DDS_long userID;
    DDS_string name;
    DDS_string message;
};

#endif
