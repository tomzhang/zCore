// Copyright 2019 The Fuchsia Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// WARNING: THIS FILE IS MACHINE GENERATED BY //tools/kazoo. DO NOT EDIT.

#define ZX_SYS_bti_create 0
#define ZX_SYS_bti_pin 1
#define ZX_SYS_bti_release_quarantine 2
#define ZX_SYS_channel_create 3
#define ZX_SYS_channel_read 4
#define ZX_SYS_channel_read_etc 5
#define ZX_SYS_channel_write 6
#define ZX_SYS_channel_write_etc 7
#define ZX_SYS_channel_call_noretry 8
#define ZX_SYS_channel_call_finish 9
#define ZX_SYS_clock_get 10
#define ZX_SYS_clock_adjust 11
#define ZX_SYS_clock_get_monotonic_via_kernel 12
#define ZX_SYS_clock_create 13
#define ZX_SYS_clock_read 14
#define ZX_SYS_clock_get_details 15
#define ZX_SYS_clock_update 16
#define ZX_SYS_cprng_draw_once 17
#define ZX_SYS_cprng_add_entropy 18
#define ZX_SYS_debug_read 19
#define ZX_SYS_debug_write 20
#define ZX_SYS_debug_send_command 21
#define ZX_SYS_debuglog_create 22
#define ZX_SYS_debuglog_write 23
#define ZX_SYS_debuglog_read 24
#define ZX_SYS_event_create 25
#define ZX_SYS_eventpair_create 26
#define ZX_SYS_exception_get_thread 27
#define ZX_SYS_exception_get_process 28
#define ZX_SYS_fifo_create 29
#define ZX_SYS_fifo_read 30
#define ZX_SYS_fifo_write 31
#define ZX_SYS_framebuffer_get_info 32
#define ZX_SYS_framebuffer_set_range 33
#define ZX_SYS_futex_wait 34
#define ZX_SYS_futex_wake 35
#define ZX_SYS_futex_requeue 36
#define ZX_SYS_futex_wake_single_owner 37
#define ZX_SYS_futex_requeue_single_owner 38
#define ZX_SYS_futex_get_owner 39
#define ZX_SYS_guest_create 40
#define ZX_SYS_guest_set_trap 41
#define ZX_SYS_handle_close 42
#define ZX_SYS_handle_close_many 43
#define ZX_SYS_handle_duplicate 44
#define ZX_SYS_handle_replace 45
#define ZX_SYS_interrupt_create 46
#define ZX_SYS_interrupt_bind 47
#define ZX_SYS_interrupt_wait 48
#define ZX_SYS_interrupt_destroy 49
#define ZX_SYS_interrupt_ack 50
#define ZX_SYS_interrupt_trigger 51
#define ZX_SYS_interrupt_bind_vcpu 52
#define ZX_SYS_iommu_create 53
#define ZX_SYS_ioports_request 54
#define ZX_SYS_ioports_release 55
#define ZX_SYS_job_create 56
#define ZX_SYS_job_set_policy 57
#define ZX_SYS_ktrace_read 58
#define ZX_SYS_ktrace_control 59
#define ZX_SYS_ktrace_write 60
#define ZX_SYS_nanosleep 61
#define ZX_SYS_ticks_get_via_kernel 62
#define ZX_SYS_mtrace_control 63
#define ZX_SYS_object_wait_one 64
#define ZX_SYS_object_wait_many 65
#define ZX_SYS_object_wait_async 66
#define ZX_SYS_object_signal 67
#define ZX_SYS_object_signal_peer 68
#define ZX_SYS_object_get_property 69
#define ZX_SYS_object_set_property 70
#define ZX_SYS_object_get_info 71
#define ZX_SYS_object_get_child 72
#define ZX_SYS_object_set_profile 73
#define ZX_SYS_pager_create 74
#define ZX_SYS_pager_create_vmo 75
#define ZX_SYS_pager_detach_vmo 76
#define ZX_SYS_pager_supply_pages 77
#define ZX_SYS_pc_firmware_tables 78
#define ZX_SYS_pci_get_nth_device 79
#define ZX_SYS_pci_enable_bus_master 80
#define ZX_SYS_pci_reset_device 81
#define ZX_SYS_pci_config_read 82
#define ZX_SYS_pci_config_write 83
#define ZX_SYS_pci_cfg_pio_rw 84
#define ZX_SYS_pci_get_bar 85
#define ZX_SYS_pci_map_interrupt 86
#define ZX_SYS_pci_query_irq_mode 87
#define ZX_SYS_pci_set_irq_mode 88
#define ZX_SYS_pci_init 89
#define ZX_SYS_pci_add_subtract_io_range 90
#define ZX_SYS_pmt_unpin 91
#define ZX_SYS_port_create 92
#define ZX_SYS_port_queue 93
#define ZX_SYS_port_wait 94
#define ZX_SYS_port_cancel 95
#define ZX_SYS_process_exit 96
#define ZX_SYS_process_create 97
#define ZX_SYS_process_start 98
#define ZX_SYS_process_read_memory 99
#define ZX_SYS_process_write_memory 100
#define ZX_SYS_profile_create 101
#define ZX_SYS_resource_create 102
#define ZX_SYS_smc_call 103
#define ZX_SYS_socket_create 104
#define ZX_SYS_socket_write 105
#define ZX_SYS_socket_read 106
#define ZX_SYS_socket_shutdown 107
#define ZX_SYS_syscall_test_0 108
#define ZX_SYS_syscall_test_1 109
#define ZX_SYS_syscall_test_2 110
#define ZX_SYS_syscall_test_3 111
#define ZX_SYS_syscall_test_4 112
#define ZX_SYS_syscall_test_5 113
#define ZX_SYS_syscall_test_6 114
#define ZX_SYS_syscall_test_7 115
#define ZX_SYS_syscall_test_8 116
#define ZX_SYS_syscall_test_wrapper 117
#define ZX_SYS_syscall_test_handle_create 118
#define ZX_SYS_system_get_event 119
#define ZX_SYS_system_mexec 120
#define ZX_SYS_system_mexec_payload_get 121
#define ZX_SYS_system_powerctl 122
#define ZX_SYS_task_suspend 123
#define ZX_SYS_task_suspend_token 124
#define ZX_SYS_task_create_exception_channel 125
#define ZX_SYS_task_kill 126
#define ZX_SYS_thread_exit 127
#define ZX_SYS_thread_create 128
#define ZX_SYS_thread_start 129
#define ZX_SYS_thread_read_state 130
#define ZX_SYS_thread_write_state 131
#define ZX_SYS_timer_create 132
#define ZX_SYS_timer_set 133
#define ZX_SYS_timer_cancel 134
#define ZX_SYS_vcpu_create 135
#define ZX_SYS_vcpu_resume 136
#define ZX_SYS_vcpu_interrupt 137
#define ZX_SYS_vcpu_read_state 138
#define ZX_SYS_vcpu_write_state 139
#define ZX_SYS_vmar_allocate 140
#define ZX_SYS_vmar_destroy 141
#define ZX_SYS_vmar_map 142
#define ZX_SYS_vmar_unmap 143
#define ZX_SYS_vmar_protect 144
#define ZX_SYS_vmar_op_range 145
#define ZX_SYS_vmo_create 146
#define ZX_SYS_vmo_read 147
#define ZX_SYS_vmo_write 148
#define ZX_SYS_vmo_get_size 149
#define ZX_SYS_vmo_set_size 150
#define ZX_SYS_vmo_op_range 151
#define ZX_SYS_vmo_create_child 152
#define ZX_SYS_vmo_set_cache_policy 153
#define ZX_SYS_vmo_replace_as_executable 154
#define ZX_SYS_vmo_create_contiguous 155
#define ZX_SYS_vmo_create_physical 156
#define ZX_SYS_COUNT 157