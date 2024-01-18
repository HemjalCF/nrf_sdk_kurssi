/* auto-generated by gen_syscalls.py, don't edit */

#ifndef Z_INCLUDE_SYSCALLS_RTIO_H
#define Z_INCLUDE_SYSCALLS_RTIO_H


#include <zephyr/tracing/tracing_syscall.h>

#ifndef _ASMLANGUAGE

#include <syscall_list.h>
#include <zephyr/syscall.h>

#include <zephyr/linker/sections.h>


#ifdef __cplusplus
extern "C" {
#endif

extern int z_impl_rtio_cqe_get_mempool_buffer(const struct rtio * r, struct rtio_cqe * cqe, uint8_t ** buff, uint32_t * buff_len);

__pinned_func
static inline int rtio_cqe_get_mempool_buffer(const struct rtio * r, struct rtio_cqe * cqe, uint8_t ** buff, uint32_t * buff_len)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct rtio * val; } parm0 = { .val = r };
		union { uintptr_t x; struct rtio_cqe * val; } parm1 = { .val = cqe };
		union { uintptr_t x; uint8_t ** val; } parm2 = { .val = buff };
		union { uintptr_t x; uint32_t * val; } parm3 = { .val = buff_len };
		return (int) arch_syscall_invoke4(parm0.x, parm1.x, parm2.x, parm3.x, K_SYSCALL_RTIO_CQE_GET_MEMPOOL_BUFFER);
	}
#endif
	compiler_barrier();
	return z_impl_rtio_cqe_get_mempool_buffer(r, cqe, buff, buff_len);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define rtio_cqe_get_mempool_buffer(r, cqe, buff, buff_len) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_RTIO_CQE_GET_MEMPOOL_BUFFER, rtio_cqe_get_mempool_buffer, r, cqe, buff, buff_len); 	retval = rtio_cqe_get_mempool_buffer(r, cqe, buff, buff_len); 	sys_port_trace_syscall_exit(K_SYSCALL_RTIO_CQE_GET_MEMPOOL_BUFFER, rtio_cqe_get_mempool_buffer, r, cqe, buff, buff_len, retval); 	retval; })
#endif
#endif


extern void z_impl_rtio_release_buffer(struct rtio * r, void * buff);

__pinned_func
static inline void rtio_release_buffer(struct rtio * r, void * buff)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; struct rtio * val; } parm0 = { .val = r };
		union { uintptr_t x; void * val; } parm1 = { .val = buff };
		(void) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_RTIO_RELEASE_BUFFER);
		return;
	}
#endif
	compiler_barrier();
	z_impl_rtio_release_buffer(r, buff);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define rtio_release_buffer(r, buff) do { 	sys_port_trace_syscall_enter(K_SYSCALL_RTIO_RELEASE_BUFFER, rtio_release_buffer, r, buff); 	rtio_release_buffer(r, buff); 	sys_port_trace_syscall_exit(K_SYSCALL_RTIO_RELEASE_BUFFER, rtio_release_buffer, r, buff); } while(false)
#endif
#endif


extern int z_impl_rtio_sqe_copy_in(struct rtio * r, const struct rtio_sqe * sqes, size_t sqe_count);

__pinned_func
static inline int rtio_sqe_copy_in(struct rtio * r, const struct rtio_sqe * sqes, size_t sqe_count)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; struct rtio * val; } parm0 = { .val = r };
		union { uintptr_t x; const struct rtio_sqe * val; } parm1 = { .val = sqes };
		union { uintptr_t x; size_t val; } parm2 = { .val = sqe_count };
		return (int) arch_syscall_invoke3(parm0.x, parm1.x, parm2.x, K_SYSCALL_RTIO_SQE_COPY_IN);
	}
#endif
	compiler_barrier();
	return z_impl_rtio_sqe_copy_in(r, sqes, sqe_count);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define rtio_sqe_copy_in(r, sqes, sqe_count) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_RTIO_SQE_COPY_IN, rtio_sqe_copy_in, r, sqes, sqe_count); 	retval = rtio_sqe_copy_in(r, sqes, sqe_count); 	sys_port_trace_syscall_exit(K_SYSCALL_RTIO_SQE_COPY_IN, rtio_sqe_copy_in, r, sqes, sqe_count, retval); 	retval; })
#endif
#endif


extern int z_impl_rtio_cqe_copy_out(struct rtio * r, struct rtio_cqe * cqes, size_t cqe_count, k_timeout_t timeout);

__pinned_func
static inline int rtio_cqe_copy_out(struct rtio * r, struct rtio_cqe * cqes, size_t cqe_count, k_timeout_t timeout)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; struct rtio * val; } parm0 = { .val = r };
		union { uintptr_t x; struct rtio_cqe * val; } parm1 = { .val = cqes };
		union { uintptr_t x; size_t val; } parm2 = { .val = cqe_count };
		union { struct { uintptr_t lo, hi; } split; k_timeout_t val; } parm3 = { .val = timeout };
		return (int) arch_syscall_invoke5(parm0.x, parm1.x, parm2.x, parm3.split.lo, parm3.split.hi, K_SYSCALL_RTIO_CQE_COPY_OUT);
	}
#endif
	compiler_barrier();
	return z_impl_rtio_cqe_copy_out(r, cqes, cqe_count, timeout);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define rtio_cqe_copy_out(r, cqes, cqe_count, timeout) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_RTIO_CQE_COPY_OUT, rtio_cqe_copy_out, r, cqes, cqe_count, timeout); 	retval = rtio_cqe_copy_out(r, cqes, cqe_count, timeout); 	sys_port_trace_syscall_exit(K_SYSCALL_RTIO_CQE_COPY_OUT, rtio_cqe_copy_out, r, cqes, cqe_count, timeout, retval); 	retval; })
#endif
#endif


extern int z_impl_rtio_submit(struct rtio * r, uint32_t wait_count);

__pinned_func
static inline int rtio_submit(struct rtio * r, uint32_t wait_count)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; struct rtio * val; } parm0 = { .val = r };
		union { uintptr_t x; uint32_t val; } parm1 = { .val = wait_count };
		return (int) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_RTIO_SUBMIT);
	}
#endif
	compiler_barrier();
	return z_impl_rtio_submit(r, wait_count);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define rtio_submit(r, wait_count) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_RTIO_SUBMIT, rtio_submit, r, wait_count); 	retval = rtio_submit(r, wait_count); 	sys_port_trace_syscall_exit(K_SYSCALL_RTIO_SUBMIT, rtio_submit, r, wait_count, retval); 	retval; })
#endif
#endif


#ifdef __cplusplus
}
#endif

#endif
#endif /* include guard */
