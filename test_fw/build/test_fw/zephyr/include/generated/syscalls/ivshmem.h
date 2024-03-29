/* auto-generated by gen_syscalls.py, don't edit */

#ifndef Z_INCLUDE_SYSCALLS_IVSHMEM_H
#define Z_INCLUDE_SYSCALLS_IVSHMEM_H


#include <zephyr/tracing/tracing_syscall.h>

#ifndef _ASMLANGUAGE

#include <syscall_list.h>
#include <zephyr/syscall.h>

#include <zephyr/linker/sections.h>


#ifdef __cplusplus
extern "C" {
#endif

extern size_t z_impl_ivshmem_get_mem(const struct device * dev, uintptr_t * memmap);

__pinned_func
static inline size_t ivshmem_get_mem(const struct device * dev, uintptr_t * memmap)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; uintptr_t * val; } parm1 = { .val = memmap };
		return (size_t) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_IVSHMEM_GET_MEM);
	}
#endif
	compiler_barrier();
	return z_impl_ivshmem_get_mem(dev, memmap);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define ivshmem_get_mem(dev, memmap) ({ 	size_t retval; 	sys_port_trace_syscall_enter(K_SYSCALL_IVSHMEM_GET_MEM, ivshmem_get_mem, dev, memmap); 	retval = ivshmem_get_mem(dev, memmap); 	sys_port_trace_syscall_exit(K_SYSCALL_IVSHMEM_GET_MEM, ivshmem_get_mem, dev, memmap, retval); 	retval; })
#endif
#endif


extern uint32_t z_impl_ivshmem_get_id(const struct device * dev);

__pinned_func
static inline uint32_t ivshmem_get_id(const struct device * dev)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		return (uint32_t) arch_syscall_invoke1(parm0.x, K_SYSCALL_IVSHMEM_GET_ID);
	}
#endif
	compiler_barrier();
	return z_impl_ivshmem_get_id(dev);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define ivshmem_get_id(dev) ({ 	uint32_t retval; 	sys_port_trace_syscall_enter(K_SYSCALL_IVSHMEM_GET_ID, ivshmem_get_id, dev); 	retval = ivshmem_get_id(dev); 	sys_port_trace_syscall_exit(K_SYSCALL_IVSHMEM_GET_ID, ivshmem_get_id, dev, retval); 	retval; })
#endif
#endif


extern uint16_t z_impl_ivshmem_get_vectors(const struct device * dev);

__pinned_func
static inline uint16_t ivshmem_get_vectors(const struct device * dev)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		return (uint16_t) arch_syscall_invoke1(parm0.x, K_SYSCALL_IVSHMEM_GET_VECTORS);
	}
#endif
	compiler_barrier();
	return z_impl_ivshmem_get_vectors(dev);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define ivshmem_get_vectors(dev) ({ 	uint16_t retval; 	sys_port_trace_syscall_enter(K_SYSCALL_IVSHMEM_GET_VECTORS, ivshmem_get_vectors, dev); 	retval = ivshmem_get_vectors(dev); 	sys_port_trace_syscall_exit(K_SYSCALL_IVSHMEM_GET_VECTORS, ivshmem_get_vectors, dev, retval); 	retval; })
#endif
#endif


extern int z_impl_ivshmem_int_peer(const struct device * dev, uint32_t peer_id, uint16_t vector);

__pinned_func
static inline int ivshmem_int_peer(const struct device * dev, uint32_t peer_id, uint16_t vector)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; uint32_t val; } parm1 = { .val = peer_id };
		union { uintptr_t x; uint16_t val; } parm2 = { .val = vector };
		return (int) arch_syscall_invoke3(parm0.x, parm1.x, parm2.x, K_SYSCALL_IVSHMEM_INT_PEER);
	}
#endif
	compiler_barrier();
	return z_impl_ivshmem_int_peer(dev, peer_id, vector);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define ivshmem_int_peer(dev, peer_id, vector) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_IVSHMEM_INT_PEER, ivshmem_int_peer, dev, peer_id, vector); 	retval = ivshmem_int_peer(dev, peer_id, vector); 	sys_port_trace_syscall_exit(K_SYSCALL_IVSHMEM_INT_PEER, ivshmem_int_peer, dev, peer_id, vector, retval); 	retval; })
#endif
#endif


extern int z_impl_ivshmem_register_handler(const struct device * dev, struct k_poll_signal * signal, uint16_t vector);

__pinned_func
static inline int ivshmem_register_handler(const struct device * dev, struct k_poll_signal * signal, uint16_t vector)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; struct k_poll_signal * val; } parm1 = { .val = signal };
		union { uintptr_t x; uint16_t val; } parm2 = { .val = vector };
		return (int) arch_syscall_invoke3(parm0.x, parm1.x, parm2.x, K_SYSCALL_IVSHMEM_REGISTER_HANDLER);
	}
#endif
	compiler_barrier();
	return z_impl_ivshmem_register_handler(dev, signal, vector);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define ivshmem_register_handler(dev, signal, vector) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_IVSHMEM_REGISTER_HANDLER, ivshmem_register_handler, dev, signal, vector); 	retval = ivshmem_register_handler(dev, signal, vector); 	sys_port_trace_syscall_exit(K_SYSCALL_IVSHMEM_REGISTER_HANDLER, ivshmem_register_handler, dev, signal, vector, retval); 	retval; })
#endif
#endif


#ifdef __cplusplus
}
#endif

#endif
#endif /* include guard */
