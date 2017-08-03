#ifndef HELLOWORLDDATASACDCPS_H
#define HELLOWORLDDATASACDCPS_H

#include "dds_dcps.h"
#include "HelloWorldDataDcps.h"

#ifndef DDS_API
#define DDS_API
#endif


#define HelloWorldData_MsgTypeSupport DDS_TypeSupport

 HelloWorldData_MsgTypeSupport
HelloWorldData_MsgTypeSupport__alloc (
    void
    );

 DDS_ReturnCode_t
HelloWorldData_MsgTypeSupport_register_type (
    HelloWorldData_MsgTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    );

 DDS_string
HelloWorldData_MsgTypeSupport_get_type_name (
    HelloWorldData_MsgTypeSupport _this
    );

#ifndef _DDS_sequence_HelloWorldData_Msg_defined
#define _DDS_sequence_HelloWorldData_Msg_defined
typedef struct {
    DDS_unsigned_long _maximum;
    DDS_unsigned_long _length;
    HelloWorldData_Msg *_buffer;
    DDS_boolean _release;
} DDS_sequence_HelloWorldData_Msg;

 DDS_sequence_HelloWorldData_Msg *DDS_sequence_HelloWorldData_Msg__alloc (void);
 HelloWorldData_Msg *DDS_sequence_HelloWorldData_Msg_allocbuf (DDS_unsigned_long len);
#endif /* _DDS_sequence_HelloWorldData_Msg_defined */

#define HelloWorldData_MsgDataWriter DDS_DataWriter

#define HelloWorldData_MsgDataWriter_enable DDS_Entity_enable

#define HelloWorldData_MsgDataWriter_get_status_changes DDS_Entity_get_status_changes

#define HelloWorldData_MsgDataWriter_get_statuscondition DDS_Entity_get_statuscondition

#define HelloWorldData_MsgDataWriter_get_instance_handle DDS_Entity_get_instance_handle

#define HelloWorldData_MsgDataWriter_assert_liveliness DDS_DataWriter_assert_liveliness

#define HelloWorldData_MsgDataWriter_get_listener DDS_DataWriter_get_listener

#define HelloWorldData_MsgDataWriter_get_liveliness_lost_status DDS_DataWriter_get_liveliness_lost_status

#define HelloWorldData_MsgDataWriter_get_matched_subscription_data DDS_DataWriter_get_matched_subscription_data

#define HelloWorldData_MsgDataWriter_get_matched_subscriptions DDS_DataWriter_get_matched_subscriptions

#define HelloWorldData_MsgDataWriter_get_offered_deadline_missed_status DDS_DataWriter_get_offered_deadline_missed_status

#define HelloWorldData_MsgDataWriter_get_offered_incompatible_qos_status DDS_DataWriter_get_offered_incompatible_qos_status

#define HelloWorldData_MsgDataWriter_get_publication_matched_status DDS_DataWriter_get_publication_matched_status

#define HelloWorldData_MsgDataWriter_get_publisher DDS_DataWriter_get_publisher

#define HelloWorldData_MsgDataWriter_get_qos DDS_DataWriter_get_qos

#define HelloWorldData_MsgDataWriter_get_topic DDS_DataWriter_get_topic

#define HelloWorldData_MsgDataWriter_set_listener DDS_DataWriter_set_listener

#define HelloWorldData_MsgDataWriter_set_qos DDS_DataWriter_set_qos

 DDS_InstanceHandle_t
HelloWorldData_MsgDataWriter_register_instance (
    HelloWorldData_MsgDataWriter _this,
    const HelloWorldData_Msg *instance_data
    );

 DDS_InstanceHandle_t
HelloWorldData_MsgDataWriter_register_instance_w_timestamp (
    HelloWorldData_MsgDataWriter _this,
    const HelloWorldData_Msg *instance_data,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
HelloWorldData_MsgDataWriter_unregister_instance (
    HelloWorldData_MsgDataWriter _this,
    const HelloWorldData_Msg *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
HelloWorldData_MsgDataWriter_unregister_instance_w_timestamp (
    HelloWorldData_MsgDataWriter _this,
    const HelloWorldData_Msg *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
HelloWorldData_MsgDataWriter_write (
    HelloWorldData_MsgDataWriter _this,
    const HelloWorldData_Msg *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
HelloWorldData_MsgDataWriter_write_w_timestamp (
    HelloWorldData_MsgDataWriter _this,
    const HelloWorldData_Msg *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
HelloWorldData_MsgDataWriter_dispose (
    HelloWorldData_MsgDataWriter _this,
    const HelloWorldData_Msg *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
HelloWorldData_MsgDataWriter_dispose_w_timestamp (
    HelloWorldData_MsgDataWriter _this,
    const HelloWorldData_Msg *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
HelloWorldData_MsgDataWriter_writedispose (
    HelloWorldData_MsgDataWriter _this,
    const HelloWorldData_Msg *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
HelloWorldData_MsgDataWriter_writedispose_w_timestamp (
    HelloWorldData_MsgDataWriter _this,
    const HelloWorldData_Msg *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
HelloWorldData_MsgDataWriter_get_key_value (
    HelloWorldData_MsgDataWriter _this,
    HelloWorldData_Msg *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
HelloWorldData_MsgDataWriter_lookup_instance (
    HelloWorldData_MsgDataWriter _this,
    const HelloWorldData_Msg *key_holder
    );

#define HelloWorldData_MsgDataReader DDS_DataReader

#define HelloWorldData_MsgDataReader_enable DDS_Entity_enable

#define HelloWorldData_MsgDataReader_get_status_changes DDS_Entity_get_status_changes

#define HelloWorldData_MsgDataReader_get_statuscondition DDS_Entity_get_statuscondition

#define HelloWorldData_MsgDataReader_get_instance_handle DDS_Entity_get_instance_handle

#define HelloWorldData_MsgDataReader_create_querycondition DDS_DataReader_create_querycondition

#define HelloWorldData_MsgDataReader_create_readcondition DDS_DataReader_create_readcondition

#define HelloWorldData_MsgDataReader_delete_contained_entities DDS_DataReader_delete_contained_entities

#define HelloWorldData_MsgDataReader_delete_readcondition DDS_DataReader_delete_readcondition

#define HelloWorldData_MsgDataReader_get_listener DDS_DataReader_get_listener

#define HelloWorldData_MsgDataReader_get_liveliness_changed_status DDS_DataReader_get_liveliness_changed_status

#define HelloWorldData_MsgDataReader_get_matched_publication_data DDS_DataReader_get_matched_publication_data

#define HelloWorldData_MsgDataReader_get_matched_publications DDS_DataReader_get_matched_publications

#define HelloWorldData_MsgDataReader_get_qos DDS_DataReader_get_qos

#define HelloWorldData_MsgDataReader_get_requested_deadline_missed_status DDS_DataReader_get_requested_deadline_missed_status

#define HelloWorldData_MsgDataReader_get_requested_incompatible_qos_status DDS_DataReader_get_requested_incompatible_qos_status

#define HelloWorldData_MsgDataReader_get_sample_lost_status DDS_DataReader_get_sample_lost_status

#define HelloWorldData_MsgDataReader_get_sample_rejected_status DDS_DataReader_get_sample_rejected_status

#define HelloWorldData_MsgDataReader_get_subscriber DDS_DataReader_get_subscriber

#define HelloWorldData_MsgDataReader_get_subscription_matched_status DDS_DataReader_get_subscription_matched_status

#define HelloWorldData_MsgDataReader_get_topicdescription DDS_DataReader_get_topicdescription

#define HelloWorldData_MsgDataReader_set_listener DDS_DataReader_set_listener

#define HelloWorldData_MsgDataReader_set_qos DDS_DataReader_set_qos

#define HelloWorldData_MsgDataReader_wait_for_historical_data DDS_DataReader_wait_for_historical_data

 DDS_ReturnCode_t
HelloWorldData_MsgDataReader_read (
    HelloWorldData_MsgDataReader _this,
    DDS_sequence_HelloWorldData_Msg *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
HelloWorldData_MsgDataReader_take (
    HelloWorldData_MsgDataReader _this,
    DDS_sequence_HelloWorldData_Msg *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
HelloWorldData_MsgDataReader_read_w_condition (
    HelloWorldData_MsgDataReader _this,
    DDS_sequence_HelloWorldData_Msg *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
HelloWorldData_MsgDataReader_take_w_condition (
    HelloWorldData_MsgDataReader _this,
    DDS_sequence_HelloWorldData_Msg *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
HelloWorldData_MsgDataReader_read_next_sample (
    HelloWorldData_MsgDataReader _this,
    HelloWorldData_Msg *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
HelloWorldData_MsgDataReader_take_next_sample (
    HelloWorldData_MsgDataReader _this,
    HelloWorldData_Msg *received_data,
    DDS_SampleInfo *sample_info
    );

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
    );

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
    );

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
    );

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
    );

 DDS_ReturnCode_t
HelloWorldData_MsgDataReader_read_next_instance_w_condition (
    HelloWorldData_MsgDataReader _this,
    DDS_sequence_HelloWorldData_Msg *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
HelloWorldData_MsgDataReader_take_next_instance_w_condition (
    HelloWorldData_MsgDataReader _this,
    DDS_sequence_HelloWorldData_Msg *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
HelloWorldData_MsgDataReader_return_loan (
    HelloWorldData_MsgDataReader _this,
    DDS_sequence_HelloWorldData_Msg *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
HelloWorldData_MsgDataReader_get_key_value (
    HelloWorldData_MsgDataReader _this,
    HelloWorldData_Msg *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
HelloWorldData_MsgDataReader_lookup_instance (
    HelloWorldData_MsgDataReader _this,
    const HelloWorldData_Msg *key_holder
    );

#define HelloWorldData_MsgDataReaderView DDS_DataReaderView

#define HelloWorldData_MsgDataReaderView_enable DDS_Entity_enable

#define HelloWorldData_MsgDataReaderView_get_instance_handle DDS_Entity_get_instance_handle

#define HelloWorldData_MsgDataReaderView_get_qos DDS_DataReaderView_get_qos

#define HelloWorldData_MsgDataReaderView_get_datareader DDS_DataReaderView_get_datareader

#define HelloWorldData_MsgDataReaderView_set_qos DDS_DataReaderView_set_qos

#define HelloWorldData_MsgDataReaderView_create_readcondition DDS_DataReaderView_create_readcondition

#define HelloWorldData_MsgDataReaderView_create_querycondition DDS_DataReaderView_create_querycondition

#define HelloWorldData_MsgDataReaderView_delete_readcondition DDS_DataReaderView_delete_readcondition

#define HelloWorldData_MsgDataReaderView_delete_contained_entities DDS_DataReaderView_delete_contained_entities

 DDS_ReturnCode_t
HelloWorldData_MsgDataReaderView_read (
    HelloWorldData_MsgDataReaderView _this,
    DDS_sequence_HelloWorldData_Msg *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
HelloWorldData_MsgDataReaderView_take (
    HelloWorldData_MsgDataReaderView _this,
    DDS_sequence_HelloWorldData_Msg *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
HelloWorldData_MsgDataReaderView_read_next_sample (
    HelloWorldData_MsgDataReaderView _this,
    HelloWorldData_Msg *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
HelloWorldData_MsgDataReaderView_take_next_sample (
    HelloWorldData_MsgDataReaderView _this,
    HelloWorldData_Msg *received_data,
    DDS_SampleInfo *sample_info
    );

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
    );

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
    );

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
    );

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
    );

 DDS_ReturnCode_t
HelloWorldData_MsgDataReaderView_return_loan (
    HelloWorldData_MsgDataReaderView _this,
    DDS_sequence_HelloWorldData_Msg *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
HelloWorldData_MsgDataReaderView_read_w_condition (
    HelloWorldData_MsgDataReaderView _this,
    DDS_sequence_HelloWorldData_Msg *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
HelloWorldData_MsgDataReaderView_take_w_condition (
    HelloWorldData_MsgDataReaderView _this,
    DDS_sequence_HelloWorldData_Msg *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
HelloWorldData_MsgDataReaderView_read_next_instance_w_condition (
    HelloWorldData_MsgDataReaderView _this,
    DDS_sequence_HelloWorldData_Msg *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
HelloWorldData_MsgDataReaderView_take_next_instance_w_condition (
    HelloWorldData_MsgDataReaderView _this,
    DDS_sequence_HelloWorldData_Msg *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
HelloWorldData_MsgDataReaderView_get_key_value (
    HelloWorldData_MsgDataReaderView _this,
    HelloWorldData_Msg *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
HelloWorldData_MsgDataReaderView_lookup_instance (
    HelloWorldData_MsgDataReaderView _this,
    HelloWorldData_Msg *key_holder
    );

#endif
