#if defined (__cplusplus)
extern "C" {
#endif

#include <dds_dcps.h>
#include <dds_dcps_private.h>

#include "HelloWorldDataSacDcps.h"
#include "HelloWorldDataSplDcps.h"

DDS_sequence_HelloWorldData_Msg *DDS_sequence_HelloWorldData_Msg__alloc (void)
{
    return (DDS_sequence_HelloWorldData_Msg *)DDS_alloc(sizeof(DDS_sequence_HelloWorldData_Msg), (DDS_deallocatorType)DDS_sequence_free);
}

HelloWorldData_Msg *DDS_sequence_HelloWorldData_Msg_allocbuf (DDS_unsigned_long len)
{
    DDS_ReturnCode_t DDS_sequence_HelloWorldData_Msg_freebuf (void *buffer);

    return (HelloWorldData_Msg *)DDS_sequence_allocbuf (DDS_sequence_HelloWorldData_Msg_freebuf, sizeof (HelloWorldData_Msg), len);
}

DDS_ReturnCode_t DDS_sequence_HelloWorldData_Msg_freebuf (void *buffer);
DDS_ReturnCode_t DDS_sequence_HelloWorldData_Msg_freebuf (void *buffer)
{
    DDS_unsigned_long *count = (DDS_unsigned_long *)DDS__header (buffer);
    HelloWorldData_Msg *b = (HelloWorldData_Msg *)buffer;
    DDS_unsigned_long i;
    DDS_ReturnCode_t HelloWorldData_Msg__free (void *object);

    for (i = 0; i < *count; i++) {
        (void) HelloWorldData_Msg__free (&b[i]);
    }
    return DDS_RETCODE_OK;
}

extern v_copyin_result __HelloWorldData_Msg__copyIn(c_base base, const void *from, void *to);
extern void __HelloWorldData_Msg__copyOut(const void *from, void *to);


HelloWorldData_MsgTypeSupport
HelloWorldData_MsgTypeSupport__alloc (
    void
    )
{
    HelloWorldData_MsgTypeSupport result;
    result = DDS_TypeSupportNew (
            "HelloWorldData::Msg",
            "",
            "userID",
            HelloWorldData_Msg_metaDescriptor,
            HelloWorldData_Msg_metaDescriptorArrLength,
            HelloWorldData_Msg_metaDescriptorLength,
            (DDS_copyIn)__HelloWorldData_Msg__copyIn,
            (DDS_copyOut)__HelloWorldData_Msg__copyOut,
            (DDS_unsigned_long)(sizeof(HelloWorldData_Msg)),
            (DDS_allocBuffer)DDS_sequence_HelloWorldData_Msg_allocbuf
        );
    return result;
}

DDS_ReturnCode_t
HelloWorldData_MsgTypeSupport_register_type (
    HelloWorldData_MsgTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_TypeSupport_register_type (
	    (DDS_TypeSupport)_this,
	    domain,
	    name
	);
    return result;
}

DDS_string
HelloWorldData_MsgTypeSupport_get_type_name (
    HelloWorldData_MsgTypeSupport _this
    )
{
    DDS_string result = (DDS_string)
        DDS_TypeSupport_get_type_name (
	    (DDS_TypeSupport)_this
	);
    return result;
}

DDS_InstanceHandle_t
HelloWorldData_MsgDataWriter_register_instance (
    HelloWorldData_MsgDataWriter _this,
    const HelloWorldData_Msg *instance_data
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataWriter_register_instance (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data
	);
    return result;
}

DDS_InstanceHandle_t
HelloWorldData_MsgDataWriter_register_instance_w_timestamp (
    HelloWorldData_MsgDataWriter _this,
    const HelloWorldData_Msg *instance_data,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataWriter_register_instance_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
HelloWorldData_MsgDataWriter_unregister_instance (
    HelloWorldData_MsgDataWriter _this,
    const HelloWorldData_Msg *instance_data,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_unregister_instance (
	    (const DDS_DataWriter)_this,
	    (DDS_Sample)instance_data,
	    handle
	);
    return result;
}

DDS_ReturnCode_t
HelloWorldData_MsgDataWriter_unregister_instance_w_timestamp (
    HelloWorldData_MsgDataWriter _this,
    const HelloWorldData_Msg *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_unregister_instance_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
HelloWorldData_MsgDataWriter_write (
    HelloWorldData_MsgDataWriter _this,
    const HelloWorldData_Msg *instance_data,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_write (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    handle
	);
    return result;
}

DDS_ReturnCode_t
HelloWorldData_MsgDataWriter_write_w_timestamp (
    HelloWorldData_MsgDataWriter _this,
    const HelloWorldData_Msg *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_write_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
HelloWorldData_MsgDataWriter_dispose (
    HelloWorldData_MsgDataWriter _this,
    const HelloWorldData_Msg *instance_data,
    const DDS_InstanceHandle_t instance_handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_dispose (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle
	);
    return result;
}

DDS_ReturnCode_t
HelloWorldData_MsgDataWriter_dispose_w_timestamp (
    HelloWorldData_MsgDataWriter _this,
    const HelloWorldData_Msg *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_dispose_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
HelloWorldData_MsgDataWriter_writedispose (
    HelloWorldData_MsgDataWriter _this,
    const HelloWorldData_Msg *instance_data,
    const DDS_InstanceHandle_t instance_handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_writedispose (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle
	);
    return result;
}

DDS_ReturnCode_t
HelloWorldData_MsgDataWriter_writedispose_w_timestamp (
    HelloWorldData_MsgDataWriter _this,
    const HelloWorldData_Msg *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_writedispose_w_timestamp (
	    (DDS_DataWriter)_this,
	    (const DDS_Sample)instance_data,
	    instance_handle,
	    source_timestamp
	);
    return result;
}

DDS_ReturnCode_t
HelloWorldData_MsgDataWriter_get_key_value (
    HelloWorldData_MsgDataWriter _this,
    HelloWorldData_Msg *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataWriter_get_key_value (
	    (DDS_DataWriter)_this,
	    (DDS_Sample)key_holder,
	    handle
	);
    return result;
}

DDS_InstanceHandle_t
HelloWorldData_MsgDataWriter_lookup_instance (
    HelloWorldData_MsgDataWriter _this,
    const HelloWorldData_Msg *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataWriter_lookup_instance (
        (DDS_DataWriter)_this,
        (DDS_Sample)key_holder
    );
    return result;
}

DDS_ReturnCode_t
HelloWorldData_MsgDataReader_read (
    HelloWorldData_MsgDataReader _this,
    DDS_sequence_HelloWorldData_Msg *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
HelloWorldData_MsgDataReader_take (
    HelloWorldData_MsgDataReader _this,
    DDS_sequence_HelloWorldData_Msg *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
HelloWorldData_MsgDataReader_read_w_condition (
    HelloWorldData_MsgDataReader _this,
    DDS_sequence_HelloWorldData_Msg *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
HelloWorldData_MsgDataReader_take_w_condition (
    HelloWorldData_MsgDataReader _this,
    DDS_sequence_HelloWorldData_Msg *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
HelloWorldData_MsgDataReader_read_next_sample (
    HelloWorldData_MsgDataReader _this,
    HelloWorldData_Msg *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_next_sample (
	    (DDS_DataReader)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
HelloWorldData_MsgDataReader_take_next_sample (
    HelloWorldData_MsgDataReader _this,
    HelloWorldData_Msg *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_next_sample (
	    (DDS_DataReader)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
HelloWorldData_MsgDataReader_read_instance (
    HelloWorldData_MsgDataReader _this,
    DDS_sequence_HelloWorldData_Msg *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
HelloWorldData_MsgDataReader_take_instance (
    HelloWorldData_MsgDataReader _this,
    DDS_sequence_HelloWorldData_Msg *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
HelloWorldData_MsgDataReader_read_next_instance (
    HelloWorldData_MsgDataReader _this,
    DDS_sequence_HelloWorldData_Msg *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_next_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
HelloWorldData_MsgDataReader_take_next_instance (
    HelloWorldData_MsgDataReader _this,
    DDS_sequence_HelloWorldData_Msg *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_next_instance (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
HelloWorldData_MsgDataReader_read_next_instance_w_condition (
    HelloWorldData_MsgDataReader _this,
    DDS_sequence_HelloWorldData_Msg *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_read_next_instance_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
HelloWorldData_MsgDataReader_take_next_instance_w_condition (
    HelloWorldData_MsgDataReader _this,
    DDS_sequence_HelloWorldData_Msg *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_take_next_instance_w_condition (
	    (DDS_DataReader)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    a_condition
	);
    return result;
}

DDS_ReturnCode_t
HelloWorldData_MsgDataReader_return_loan (
    HelloWorldData_MsgDataReader _this,
    DDS_sequence_HelloWorldData_Msg *received_data,
    DDS_SampleInfoSeq *info_seq
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_return_loan (
            (DDS_DataReader)_this,
            (_DDS_sequence)received_data,
            info_seq
    );
    return result;
}

DDS_ReturnCode_t
HelloWorldData_MsgDataReader_get_key_value (
    HelloWorldData_MsgDataReader _this,
    HelloWorldData_Msg *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReader_get_key_value (
	    (DDS_DataReader)_this,
	    (DDS_Sample)key_holder,
	    handle
	);
    return result;
}

DDS_InstanceHandle_t
HelloWorldData_MsgDataReader_lookup_instance (
    HelloWorldData_MsgDataReader _this,
    const HelloWorldData_Msg *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataReader_lookup_instance (
	    (DDS_DataReader)_this,
	    (DDS_Sample)key_holder
	);
    return result;
}

DDS_ReturnCode_t
HelloWorldData_MsgDataReaderView_read (
    HelloWorldData_MsgDataReaderView _this,
    DDS_sequence_HelloWorldData_Msg *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
HelloWorldData_MsgDataReaderView_take (
    HelloWorldData_MsgDataReaderView _this,
    DDS_sequence_HelloWorldData_Msg *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
HelloWorldData_MsgDataReaderView_read_next_sample (
    HelloWorldData_MsgDataReaderView _this,
    HelloWorldData_Msg *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_next_sample (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
HelloWorldData_MsgDataReaderView_take_next_sample (
    HelloWorldData_MsgDataReaderView _this,
    HelloWorldData_Msg *received_data,
    DDS_SampleInfo *sample_info
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_next_sample (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)received_data,
	    sample_info
	);
    return result;
}

DDS_ReturnCode_t
HelloWorldData_MsgDataReaderView_read_instance (
    HelloWorldData_MsgDataReaderView _this,
    DDS_sequence_HelloWorldData_Msg *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
HelloWorldData_MsgDataReaderView_take_instance (
    HelloWorldData_MsgDataReaderView _this,
    DDS_sequence_HelloWorldData_Msg *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
HelloWorldData_MsgDataReaderView_read_next_instance (
    HelloWorldData_MsgDataReaderView _this,
    DDS_sequence_HelloWorldData_Msg *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_next_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
HelloWorldData_MsgDataReaderView_take_next_instance (
    HelloWorldData_MsgDataReaderView _this,
    DDS_sequence_HelloWorldData_Msg *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_next_instance (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
	    sample_states,
	    view_states,
	    instance_states
	);
    return result;
}

DDS_ReturnCode_t
HelloWorldData_MsgDataReaderView_return_loan (
    HelloWorldData_MsgDataReaderView _this,
    DDS_sequence_HelloWorldData_Msg *received_data,
    DDS_SampleInfoSeq *info_seq
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_return_loan (
            (DDS_DataReaderView)_this,
            (_DDS_sequence)received_data,
            info_seq
    );

    if ( result == DDS_RETCODE_OK ) {
        DDS_free(received_data->_buffer);
        received_data->_length  = 0;
        received_data->_maximum = 0;
        received_data->_buffer  = NULL;
        
        DDS_free(info_seq->_buffer);
        info_seq->_length  = 0;
        info_seq->_maximum = 0;
        info_seq->_buffer  = NULL;
    }

    return result;
}


DDS_ReturnCode_t
HelloWorldData_MsgDataReaderView_read_w_condition (
    HelloWorldData_MsgDataReaderView _this,
    DDS_sequence_HelloWorldData_Msg *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
HelloWorldData_MsgDataReaderView_take_w_condition (
    HelloWorldData_MsgDataReaderView _this,
    DDS_sequence_HelloWorldData_Msg *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
HelloWorldData_MsgDataReaderView_read_next_instance_w_condition (
    HelloWorldData_MsgDataReaderView _this,
    DDS_sequence_HelloWorldData_Msg *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
   )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_read_next_instance_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
HelloWorldData_MsgDataReaderView_take_next_instance_w_condition (
    HelloWorldData_MsgDataReaderView _this,
    DDS_sequence_HelloWorldData_Msg *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
   )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_take_next_instance_w_condition (
	    (DDS_DataReaderView)_this,
	    (_DDS_sequence)received_data,
	    info_seq,
	    max_samples,
	    a_handle,
            a_condition
	);
    return result;
}


DDS_ReturnCode_t
HelloWorldData_MsgDataReaderView_get_key_value (
    HelloWorldData_MsgDataReaderView _this,
    HelloWorldData_Msg *key_holder,
    const DDS_InstanceHandle_t handle
    )
{
    DDS_ReturnCode_t result = (DDS_ReturnCode_t)
        DDS_DataReaderView_get_key_value (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)key_holder,
	    handle
	);
    return result;
}


DDS_InstanceHandle_t
HelloWorldData_MsgDataReaderView_lookup_instance (
    HelloWorldData_MsgDataReaderView _this,
    HelloWorldData_Msg *key_holder
    )
{
    DDS_InstanceHandle_t result = (DDS_InstanceHandle_t)
        DDS_DataReaderView_lookup_instance (
	    (DDS_DataReaderView)_this,
	    (DDS_Sample)key_holder
	);
    return result;
}

#if defined (__cplusplus)
}
#endif
