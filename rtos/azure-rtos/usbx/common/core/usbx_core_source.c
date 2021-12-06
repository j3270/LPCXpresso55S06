#include "src/ux_dcd_sim_slave_address_set.c"
#include "src/ux_dcd_sim_slave_endpoint_create.c"
#include "src/ux_dcd_sim_slave_endpoint_destroy.c"
#include "src/ux_dcd_sim_slave_endpoint_reset.c"
#include "src/ux_dcd_sim_slave_endpoint_stall.c"
#include "src/ux_dcd_sim_slave_endpoint_status.c"
#include "src/ux_dcd_sim_slave_frame_number_get.c"
#include "src/ux_dcd_sim_slave_function.c"
#include "src/ux_dcd_sim_slave_initialize.c"
#include "src/ux_dcd_sim_slave_initialize_complete.c"
#include "src/ux_dcd_sim_slave_state_change.c"
#include "src/ux_dcd_sim_slave_transfer_abort.c"
#include "src/ux_dcd_sim_slave_transfer_request.c"
#include "src/ux_device_class_dpump_activate.c"
#include "src/ux_device_class_dpump_change.c"
#include "src/ux_device_class_dpump_deactivate.c"
#include "src/ux_device_class_dpump_entry.c"
#include "src/ux_device_class_dpump_initialize.c"
#include "src/ux_device_class_dpump_read.c"
#include "src/ux_device_class_dpump_thread.c"
#include "src/ux_device_class_dpump_write.c"
#include "src/ux_device_stack_alternate_setting_get.c"
#include "src/ux_device_stack_alternate_setting_set.c"
#include "src/ux_device_stack_class_register.c"
#include "src/ux_device_stack_class_unregister.c"
#include "src/ux_device_stack_clear_feature.c"
#include "src/ux_device_stack_configuration_get.c"
#include "src/ux_device_stack_configuration_set.c"
#include "src/ux_device_stack_control_request_process.c"
#include "src/ux_device_stack_descriptor_send.c"
#include "src/ux_device_stack_disconnect.c"
#include "src/ux_device_stack_endpoint_stall.c"
#include "src/ux_device_stack_get_status.c"
#include "src/ux_device_stack_host_wakeup.c"
#include "src/ux_device_stack_initialize.c"
#include "src/ux_device_stack_interface_delete.c"
#include "src/ux_device_stack_interface_get.c"
#include "src/ux_device_stack_interface_set.c"
#include "src/ux_device_stack_interface_start.c"
#include "src/ux_device_stack_microsoft_extension_register.c"
#include "src/ux_device_stack_set_feature.c"
#include "src/ux_device_stack_transfer_abort.c"
#include "src/ux_device_stack_transfer_all_request_abort.c"
#include "src/ux_device_stack_transfer_request.c"
#include "src/ux_device_stack_uninitialize.c"
#include "src/ux_hcd_sim_host_asynch_queue_process.c"
#include "src/ux_hcd_sim_host_asynchronous_endpoint_create.c"
#include "src/ux_hcd_sim_host_asynchronous_endpoint_destroy.c"
#include "src/ux_hcd_sim_host_asynch_schedule.c"
#include "src/ux_hcd_sim_host_controller_disable.c"
#include "src/ux_hcd_sim_host_ed_obtain.c"
#include "src/ux_hcd_sim_host_ed_td_clean.c"
#include "src/ux_hcd_sim_host_endpoint_reset.c"
#include "src/ux_hcd_sim_host_entry.c"
#include "src/ux_hcd_sim_host_frame_number_get.c"
#include "src/ux_hcd_sim_host_frame_number_set.c"
#include "src/ux_hcd_sim_host_initialize.c"
#include "src/ux_hcd_sim_host_interrupt_endpoint_create.c"
#include "src/ux_hcd_sim_host_isochronous_endpoint_create.c"
#include "src/ux_hcd_sim_host_isochronous_td_obtain.c"
#include "src/ux_hcd_sim_host_iso_queue_process.c"
#include "src/ux_hcd_sim_host_iso_schedule.c"
#include "src/ux_hcd_sim_host_least_traffic_list_get.c"
#include "src/ux_hcd_sim_host_periodic_endpoint_destroy.c"
#include "src/ux_hcd_sim_host_periodic_schedule.c"
#include "src/ux_hcd_sim_host_periodic_tree_create.c"
#include "src/ux_hcd_sim_host_port_reset.c"
#include "src/ux_hcd_sim_host_port_status_get.c"
#include "src/ux_hcd_sim_host_regular_td_obtain.c"
#include "src/ux_hcd_sim_host_request_bulk_transfer.c"
#include "src/ux_hcd_sim_host_request_control_transfer.c"
#include "src/ux_hcd_sim_host_request_interupt_transfer.c"
#include "src/ux_hcd_sim_host_request_isochronous_transfer.c"
#include "src/ux_hcd_sim_host_request_transfer.c"
#include "src/ux_hcd_sim_host_timer_function.c"
#include "src/ux_hcd_sim_host_transaction_schedule.c"
#include "src/ux_hcd_sim_host_transfer_abort.c"
#include "src/ux_hcd_sim_host_uninitialize.c"
#include "src/ux_host_class_dpump_activate.c"
#include "src/ux_host_class_dpump_configure.c"
#include "src/ux_host_class_dpump_deactivate.c"
#include "src/ux_host_class_dpump_endpoints_get.c"
#include "src/ux_host_class_dpump_entry.c"
#include "src/ux_host_class_dpump_ioctl.c"
#include "src/ux_host_class_dpump_read.c"
#include "src/ux_host_class_dpump_write.c"
#include "src/ux_host_stack_bandwidth_check.c"
#include "src/ux_host_stack_bandwidth_claim.c"
#include "src/ux_host_stack_bandwidth_release.c"
#include "src/ux_host_stack_class_call.c"
#include "src/ux_host_stack_class_device_scan.c"
#include "src/ux_host_stack_class_get.c"
#include "src/ux_host_stack_class_instance_create.c"
#include "src/ux_host_stack_class_instance_destroy.c"
#include "src/ux_host_stack_class_instance_get.c"
#include "src/ux_host_stack_class_instance_verify.c"
#include "src/ux_host_stack_class_interface_scan.c"
#include "src/ux_host_stack_class_register.c"
#include "src/ux_host_stack_class_unregister.c"
#include "src/ux_host_stack_configuration_descriptor_parse.c"
#include "src/ux_host_stack_configuration_enumerate.c"
#include "src/ux_host_stack_configuration_instance_create.c"
#include "src/ux_host_stack_configuration_instance_delete.c"
#include "src/ux_host_stack_configuration_interface_get.c"
#include "src/ux_host_stack_configuration_set.c"
#include "src/ux_host_stack_configuration_interface_scan.c"
#include "src/ux_host_stack_delay_ms.c"
#include "src/ux_host_stack_device_address_set.c"
#include "src/ux_host_stack_device_configuration_get.c"
#include "src/ux_host_stack_device_configuration_reset.c"
#include "src/ux_host_stack_device_configuration_select.c"
#include "src/ux_host_stack_device_configuration_activate.c"
#include "src/ux_host_stack_device_configuration_deactivate.c"
#include "src/ux_host_stack_device_string_get.c"
#include "src/ux_host_stack_device_descriptor_read.c"
#include "src/ux_host_stack_device_get.c"
#include "src/ux_host_stack_device_remove.c"
#include "src/ux_host_stack_device_resources_free.c"
#include "src/ux_host_stack_endpoint_instance_create.c"
#include "src/ux_host_stack_endpoint_instance_delete.c"
#include "src/ux_host_stack_endpoint_reset.c"
#include "src/ux_host_stack_endpoint_transfer_abort.c"
#include "src/ux_host_stack_enum_thread_entry.c"
#include "src/ux_host_stack_hcd_register.c"
#include "src/ux_host_stack_hcd_thread_entry.c"
#include "src/ux_host_stack_hcd_transfer_request.c"
#include "src/ux_host_stack_hcd_unregister.c"
#include "src/ux_host_stack_hnp_polling_thread_entry.c"
#include "src/ux_host_stack_initialize.c"
#include "src/ux_host_stack_interface_endpoint_get.c"
#include "src/ux_host_stack_interface_instance_create.c"
#include "src/ux_host_stack_interface_instance_delete.c"
#include "src/ux_host_stack_interface_set.c"
#include "src/ux_host_stack_interface_setting_select.c"
#include "src/ux_host_stack_interfaces_scan.c"
#include "src/ux_host_stack_new_configuration_create.c"
#include "src/ux_host_stack_new_device_create.c"
#include "src/ux_host_stack_new_device_get.c"
#include "src/ux_host_stack_new_endpoint_create.c"
#include "src/ux_host_stack_new_interface_create.c"
#include "src/ux_host_stack_rh_change_process.c"
#include "src/ux_host_stack_rh_device_extraction.c"
#include "src/ux_host_stack_rh_device_insertion.c"
#include "src/ux_host_stack_role_swap.c"
#include "src/ux_host_stack_transfer_request_abort.c"
#include "src/ux_host_stack_transfer_request.c"
#include "src/ux_host_stack_uninitialize.c"
#include "src/ux_system_error_handler.c"
#include "src/ux_system_uninitialize.c"
#include "src/ux_trace_event_insert.c"
#include "src/ux_trace_event_update.c"
#include "src/ux_trace_object_register.c"
#include "src/ux_trace_object_unregister.c"
#include "src/ux_utility_debug_callback_register.c"
#include "src/ux_utility_debug_log.c"
#include "src/ux_utility_delay_ms.c"
#include "src/ux_utility_descriptor_pack.c"
#include "src/ux_utility_descriptor_parse.c"
#include "src/ux_utility_error_callback_register.c"
#include "src/ux_utility_event_flags_create.c"
#include "src/ux_utility_event_flags_delete.c"
#include "src/ux_utility_event_flags_get.c"
#include "src/ux_utility_event_flags_set.c"
#include "src/ux_utility_long_get_big_endian.c"
#include "src/ux_utility_long_get.c"
#include "src/ux_utility_long_put_big_endian.c"
#include "src/ux_utility_long_put.c"
#include "src/ux_utility_memory_allocate_add_safe.c"
#include "src/ux_utility_memory_allocate.c"
#include "src/ux_utility_memory_allocate_mulc_safe.c"
#include "src/ux_utility_memory_allocate_mulv_safe.c"
#include "src/ux_utility_memory_compare.c"
#include "src/ux_utility_memory_copy.c"
#include "src/ux_utility_memory_free_block_best_get.c"
#include "src/ux_utility_memory_free.c"
#include "src/ux_utility_memory_set.c"
#include "src/ux_utility_mutex_create.c"
#include "src/ux_utility_mutex_delete.c"
#include "src/ux_utility_mutex_off.c"
#include "src/ux_utility_mutex_on.c"
#include "src/ux_utility_pci_class_scan.c"
#include "src/ux_utility_pci_read.c"
#include "src/ux_utility_pci_write.c"
#include "src/ux_utility_physical_address.c"
#include "src/ux_utility_semaphore_create.c"
#include "src/ux_utility_semaphore_delete.c"
#include "src/ux_utility_semaphore_get.c"
#include "src/ux_utility_semaphore_put.c"
#include "src/ux_utility_set_interrupt_handler.c"
#include "src/ux_utility_short_get_big_endian.c"
#include "src/ux_utility_short_get.c"
#include "src/ux_utility_short_put_big_endian.c"
#include "src/ux_utility_short_put.c"
#include "src/ux_utility_string_length_check.c"
#include "src/ux_utility_string_length_get.c"
#include "src/ux_utility_string_to_unicode.c"
#include "src/ux_utility_thread_create.c"
#include "src/ux_utility_thread_delete.c"
#include "src/ux_utility_thread_identify.c"
#include "src/ux_utility_thread_relinquish.c"
#include "src/ux_utility_thread_resume.c"
#include "src/ux_utility_thread_schedule_other.c"
#include "src/ux_utility_thread_sleep.c"
#include "src/ux_utility_thread_suspend.c"
#include "src/ux_utility_timer_create.c"
#include "src/ux_utility_timer_delete.c"
#include "src/ux_utility_unicode_to_string.c"
#include "src/ux_utility_virtual_address.c"
