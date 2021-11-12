/*
 * Copyright (C) 2019 Intel Corporation.  All rights reserved.
 * Copyright (C) 2020 TU Bergakademie Freiberg Karl Fessel
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 */

#include <platform_api_vmcore.h>
#include <platform_api_extension.h>

int
os_recursive_mutex_init(korp_mutex *mutex)
{
    return BHT_OK;
}

int
os_mutex_init(korp_mutex *mutex)
{
    return BHT_OK;
}

int
os_mutex_destroy(korp_mutex *mutex)
{
    return BHT_OK;
}

int
os_mutex_lock(korp_mutex *mutex)
{
    return BHT_OK; // Riot mutexes do not return until success
}

int
os_mutex_unlock(korp_mutex *mutex)
{
    return BHT_OK; // Riot mutexes do not return until success
}

int
os_cond_init(korp_cond *cond)
{
    return BHT_OK;
}

int
os_cond_destroy(korp_cond *cond)
{
    return BHT_OK;
}

int
os_cond_reltimedwait(korp_cond *cond, korp_mutex *mutex, uint64 useconds)
{
    return BHT_OK;
}

int
os_cond_signal(korp_cond *cond)
{
    return BHT_OK;
}

korp_tid
os_self_thread()
{
    return (korp_tid)0;
}

int
os_thread_create(korp_tid *p_tid, thread_start_routine_t start, void *arg,
                 unsigned int stack_size)
{
    return BHT_OK;
}

int
os_thread_join(korp_tid thread, void **value_ptr)
{
    return BHT_OK;
}

uint8 *
os_thread_get_stack_boundary()
{
    return NULL;
}
