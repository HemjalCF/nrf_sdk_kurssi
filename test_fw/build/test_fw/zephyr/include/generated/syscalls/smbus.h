/* auto-generated by gen_syscalls.py, don't edit */

#ifndef Z_INCLUDE_SYSCALLS_SMBUS_H
#define Z_INCLUDE_SYSCALLS_SMBUS_H


#include <zephyr/tracing/tracing_syscall.h>

#ifndef _ASMLANGUAGE

#include <syscall_list.h>
#include <zephyr/syscall.h>

#include <zephyr/linker/sections.h>


#ifdef __cplusplus
extern "C" {
#endif

extern int z_impl_smbus_configure(const struct device * dev, uint32_t dev_config);

__pinned_func
static inline int smbus_configure(const struct device * dev, uint32_t dev_config)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; uint32_t val; } parm1 = { .val = dev_config };
		return (int) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_SMBUS_CONFIGURE);
	}
#endif
	compiler_barrier();
	return z_impl_smbus_configure(dev, dev_config);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define smbus_configure(dev, dev_config) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_SMBUS_CONFIGURE, smbus_configure, dev, dev_config); 	retval = smbus_configure(dev, dev_config); 	sys_port_trace_syscall_exit(K_SYSCALL_SMBUS_CONFIGURE, smbus_configure, dev, dev_config, retval); 	retval; })
#endif
#endif


extern int z_impl_smbus_get_config(const struct device * dev, uint32_t * dev_config);

__pinned_func
static inline int smbus_get_config(const struct device * dev, uint32_t * dev_config)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; uint32_t * val; } parm1 = { .val = dev_config };
		return (int) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_SMBUS_GET_CONFIG);
	}
#endif
	compiler_barrier();
	return z_impl_smbus_get_config(dev, dev_config);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define smbus_get_config(dev, dev_config) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_SMBUS_GET_CONFIG, smbus_get_config, dev, dev_config); 	retval = smbus_get_config(dev, dev_config); 	sys_port_trace_syscall_exit(K_SYSCALL_SMBUS_GET_CONFIG, smbus_get_config, dev, dev_config, retval); 	retval; })
#endif
#endif


extern int z_impl_smbus_smbalert_set_cb(const struct device * dev, struct smbus_callback * cb);

__pinned_func
static inline int smbus_smbalert_set_cb(const struct device * dev, struct smbus_callback * cb)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; struct smbus_callback * val; } parm1 = { .val = cb };
		return (int) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_SMBUS_SMBALERT_SET_CB);
	}
#endif
	compiler_barrier();
	return z_impl_smbus_smbalert_set_cb(dev, cb);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define smbus_smbalert_set_cb(dev, cb) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_SMBUS_SMBALERT_SET_CB, smbus_smbalert_set_cb, dev, cb); 	retval = smbus_smbalert_set_cb(dev, cb); 	sys_port_trace_syscall_exit(K_SYSCALL_SMBUS_SMBALERT_SET_CB, smbus_smbalert_set_cb, dev, cb, retval); 	retval; })
#endif
#endif


extern int z_impl_smbus_smbalert_remove_cb(const struct device * dev, struct smbus_callback * cb);

__pinned_func
static inline int smbus_smbalert_remove_cb(const struct device * dev, struct smbus_callback * cb)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; struct smbus_callback * val; } parm1 = { .val = cb };
		return (int) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_SMBUS_SMBALERT_REMOVE_CB);
	}
#endif
	compiler_barrier();
	return z_impl_smbus_smbalert_remove_cb(dev, cb);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define smbus_smbalert_remove_cb(dev, cb) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_SMBUS_SMBALERT_REMOVE_CB, smbus_smbalert_remove_cb, dev, cb); 	retval = smbus_smbalert_remove_cb(dev, cb); 	sys_port_trace_syscall_exit(K_SYSCALL_SMBUS_SMBALERT_REMOVE_CB, smbus_smbalert_remove_cb, dev, cb, retval); 	retval; })
#endif
#endif


extern int z_impl_smbus_host_notify_set_cb(const struct device * dev, struct smbus_callback * cb);

__pinned_func
static inline int smbus_host_notify_set_cb(const struct device * dev, struct smbus_callback * cb)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; struct smbus_callback * val; } parm1 = { .val = cb };
		return (int) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_SMBUS_HOST_NOTIFY_SET_CB);
	}
#endif
	compiler_barrier();
	return z_impl_smbus_host_notify_set_cb(dev, cb);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define smbus_host_notify_set_cb(dev, cb) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_SMBUS_HOST_NOTIFY_SET_CB, smbus_host_notify_set_cb, dev, cb); 	retval = smbus_host_notify_set_cb(dev, cb); 	sys_port_trace_syscall_exit(K_SYSCALL_SMBUS_HOST_NOTIFY_SET_CB, smbus_host_notify_set_cb, dev, cb, retval); 	retval; })
#endif
#endif


extern int z_impl_smbus_host_notify_remove_cb(const struct device * dev, struct smbus_callback * cb);

__pinned_func
static inline int smbus_host_notify_remove_cb(const struct device * dev, struct smbus_callback * cb)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; struct smbus_callback * val; } parm1 = { .val = cb };
		return (int) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_SMBUS_HOST_NOTIFY_REMOVE_CB);
	}
#endif
	compiler_barrier();
	return z_impl_smbus_host_notify_remove_cb(dev, cb);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define smbus_host_notify_remove_cb(dev, cb) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_SMBUS_HOST_NOTIFY_REMOVE_CB, smbus_host_notify_remove_cb, dev, cb); 	retval = smbus_host_notify_remove_cb(dev, cb); 	sys_port_trace_syscall_exit(K_SYSCALL_SMBUS_HOST_NOTIFY_REMOVE_CB, smbus_host_notify_remove_cb, dev, cb, retval); 	retval; })
#endif
#endif


extern int z_impl_smbus_quick(const struct device * dev, uint16_t addr, enum smbus_direction direction);

__pinned_func
static inline int smbus_quick(const struct device * dev, uint16_t addr, enum smbus_direction direction)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; uint16_t val; } parm1 = { .val = addr };
		union { uintptr_t x; enum smbus_direction val; } parm2 = { .val = direction };
		return (int) arch_syscall_invoke3(parm0.x, parm1.x, parm2.x, K_SYSCALL_SMBUS_QUICK);
	}
#endif
	compiler_barrier();
	return z_impl_smbus_quick(dev, addr, direction);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define smbus_quick(dev, addr, direction) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_SMBUS_QUICK, smbus_quick, dev, addr, direction); 	retval = smbus_quick(dev, addr, direction); 	sys_port_trace_syscall_exit(K_SYSCALL_SMBUS_QUICK, smbus_quick, dev, addr, direction, retval); 	retval; })
#endif
#endif


extern int z_impl_smbus_byte_write(const struct device * dev, uint16_t addr, uint8_t byte);

__pinned_func
static inline int smbus_byte_write(const struct device * dev, uint16_t addr, uint8_t byte)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; uint16_t val; } parm1 = { .val = addr };
		union { uintptr_t x; uint8_t val; } parm2 = { .val = byte };
		return (int) arch_syscall_invoke3(parm0.x, parm1.x, parm2.x, K_SYSCALL_SMBUS_BYTE_WRITE);
	}
#endif
	compiler_barrier();
	return z_impl_smbus_byte_write(dev, addr, byte);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define smbus_byte_write(dev, addr, byte) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_SMBUS_BYTE_WRITE, smbus_byte_write, dev, addr, byte); 	retval = smbus_byte_write(dev, addr, byte); 	sys_port_trace_syscall_exit(K_SYSCALL_SMBUS_BYTE_WRITE, smbus_byte_write, dev, addr, byte, retval); 	retval; })
#endif
#endif


extern int z_impl_smbus_byte_read(const struct device * dev, uint16_t addr, uint8_t * byte);

__pinned_func
static inline int smbus_byte_read(const struct device * dev, uint16_t addr, uint8_t * byte)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; uint16_t val; } parm1 = { .val = addr };
		union { uintptr_t x; uint8_t * val; } parm2 = { .val = byte };
		return (int) arch_syscall_invoke3(parm0.x, parm1.x, parm2.x, K_SYSCALL_SMBUS_BYTE_READ);
	}
#endif
	compiler_barrier();
	return z_impl_smbus_byte_read(dev, addr, byte);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define smbus_byte_read(dev, addr, byte) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_SMBUS_BYTE_READ, smbus_byte_read, dev, addr, byte); 	retval = smbus_byte_read(dev, addr, byte); 	sys_port_trace_syscall_exit(K_SYSCALL_SMBUS_BYTE_READ, smbus_byte_read, dev, addr, byte, retval); 	retval; })
#endif
#endif


extern int z_impl_smbus_byte_data_write(const struct device * dev, uint16_t addr, uint8_t cmd, uint8_t byte);

__pinned_func
static inline int smbus_byte_data_write(const struct device * dev, uint16_t addr, uint8_t cmd, uint8_t byte)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; uint16_t val; } parm1 = { .val = addr };
		union { uintptr_t x; uint8_t val; } parm2 = { .val = cmd };
		union { uintptr_t x; uint8_t val; } parm3 = { .val = byte };
		return (int) arch_syscall_invoke4(parm0.x, parm1.x, parm2.x, parm3.x, K_SYSCALL_SMBUS_BYTE_DATA_WRITE);
	}
#endif
	compiler_barrier();
	return z_impl_smbus_byte_data_write(dev, addr, cmd, byte);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define smbus_byte_data_write(dev, addr, cmd, byte) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_SMBUS_BYTE_DATA_WRITE, smbus_byte_data_write, dev, addr, cmd, byte); 	retval = smbus_byte_data_write(dev, addr, cmd, byte); 	sys_port_trace_syscall_exit(K_SYSCALL_SMBUS_BYTE_DATA_WRITE, smbus_byte_data_write, dev, addr, cmd, byte, retval); 	retval; })
#endif
#endif


extern int z_impl_smbus_byte_data_read(const struct device * dev, uint16_t addr, uint8_t cmd, uint8_t * byte);

__pinned_func
static inline int smbus_byte_data_read(const struct device * dev, uint16_t addr, uint8_t cmd, uint8_t * byte)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; uint16_t val; } parm1 = { .val = addr };
		union { uintptr_t x; uint8_t val; } parm2 = { .val = cmd };
		union { uintptr_t x; uint8_t * val; } parm3 = { .val = byte };
		return (int) arch_syscall_invoke4(parm0.x, parm1.x, parm2.x, parm3.x, K_SYSCALL_SMBUS_BYTE_DATA_READ);
	}
#endif
	compiler_barrier();
	return z_impl_smbus_byte_data_read(dev, addr, cmd, byte);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define smbus_byte_data_read(dev, addr, cmd, byte) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_SMBUS_BYTE_DATA_READ, smbus_byte_data_read, dev, addr, cmd, byte); 	retval = smbus_byte_data_read(dev, addr, cmd, byte); 	sys_port_trace_syscall_exit(K_SYSCALL_SMBUS_BYTE_DATA_READ, smbus_byte_data_read, dev, addr, cmd, byte, retval); 	retval; })
#endif
#endif


extern int z_impl_smbus_word_data_write(const struct device * dev, uint16_t addr, uint8_t cmd, uint16_t word);

__pinned_func
static inline int smbus_word_data_write(const struct device * dev, uint16_t addr, uint8_t cmd, uint16_t word)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; uint16_t val; } parm1 = { .val = addr };
		union { uintptr_t x; uint8_t val; } parm2 = { .val = cmd };
		union { uintptr_t x; uint16_t val; } parm3 = { .val = word };
		return (int) arch_syscall_invoke4(parm0.x, parm1.x, parm2.x, parm3.x, K_SYSCALL_SMBUS_WORD_DATA_WRITE);
	}
#endif
	compiler_barrier();
	return z_impl_smbus_word_data_write(dev, addr, cmd, word);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define smbus_word_data_write(dev, addr, cmd, word) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_SMBUS_WORD_DATA_WRITE, smbus_word_data_write, dev, addr, cmd, word); 	retval = smbus_word_data_write(dev, addr, cmd, word); 	sys_port_trace_syscall_exit(K_SYSCALL_SMBUS_WORD_DATA_WRITE, smbus_word_data_write, dev, addr, cmd, word, retval); 	retval; })
#endif
#endif


extern int z_impl_smbus_word_data_read(const struct device * dev, uint16_t addr, uint8_t cmd, uint16_t * word);

__pinned_func
static inline int smbus_word_data_read(const struct device * dev, uint16_t addr, uint8_t cmd, uint16_t * word)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; uint16_t val; } parm1 = { .val = addr };
		union { uintptr_t x; uint8_t val; } parm2 = { .val = cmd };
		union { uintptr_t x; uint16_t * val; } parm3 = { .val = word };
		return (int) arch_syscall_invoke4(parm0.x, parm1.x, parm2.x, parm3.x, K_SYSCALL_SMBUS_WORD_DATA_READ);
	}
#endif
	compiler_barrier();
	return z_impl_smbus_word_data_read(dev, addr, cmd, word);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define smbus_word_data_read(dev, addr, cmd, word) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_SMBUS_WORD_DATA_READ, smbus_word_data_read, dev, addr, cmd, word); 	retval = smbus_word_data_read(dev, addr, cmd, word); 	sys_port_trace_syscall_exit(K_SYSCALL_SMBUS_WORD_DATA_READ, smbus_word_data_read, dev, addr, cmd, word, retval); 	retval; })
#endif
#endif


extern int z_impl_smbus_pcall(const struct device * dev, uint16_t addr, uint8_t cmd, uint16_t send_word, uint16_t * recv_word);

__pinned_func
static inline int smbus_pcall(const struct device * dev, uint16_t addr, uint8_t cmd, uint16_t send_word, uint16_t * recv_word)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; uint16_t val; } parm1 = { .val = addr };
		union { uintptr_t x; uint8_t val; } parm2 = { .val = cmd };
		union { uintptr_t x; uint16_t val; } parm3 = { .val = send_word };
		union { uintptr_t x; uint16_t * val; } parm4 = { .val = recv_word };
		return (int) arch_syscall_invoke5(parm0.x, parm1.x, parm2.x, parm3.x, parm4.x, K_SYSCALL_SMBUS_PCALL);
	}
#endif
	compiler_barrier();
	return z_impl_smbus_pcall(dev, addr, cmd, send_word, recv_word);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define smbus_pcall(dev, addr, cmd, send_word, recv_word) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_SMBUS_PCALL, smbus_pcall, dev, addr, cmd, send_word, recv_word); 	retval = smbus_pcall(dev, addr, cmd, send_word, recv_word); 	sys_port_trace_syscall_exit(K_SYSCALL_SMBUS_PCALL, smbus_pcall, dev, addr, cmd, send_word, recv_word, retval); 	retval; })
#endif
#endif


extern int z_impl_smbus_block_write(const struct device * dev, uint16_t addr, uint8_t cmd, uint8_t count, uint8_t * buf);

__pinned_func
static inline int smbus_block_write(const struct device * dev, uint16_t addr, uint8_t cmd, uint8_t count, uint8_t * buf)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; uint16_t val; } parm1 = { .val = addr };
		union { uintptr_t x; uint8_t val; } parm2 = { .val = cmd };
		union { uintptr_t x; uint8_t val; } parm3 = { .val = count };
		union { uintptr_t x; uint8_t * val; } parm4 = { .val = buf };
		return (int) arch_syscall_invoke5(parm0.x, parm1.x, parm2.x, parm3.x, parm4.x, K_SYSCALL_SMBUS_BLOCK_WRITE);
	}
#endif
	compiler_barrier();
	return z_impl_smbus_block_write(dev, addr, cmd, count, buf);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define smbus_block_write(dev, addr, cmd, count, buf) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_SMBUS_BLOCK_WRITE, smbus_block_write, dev, addr, cmd, count, buf); 	retval = smbus_block_write(dev, addr, cmd, count, buf); 	sys_port_trace_syscall_exit(K_SYSCALL_SMBUS_BLOCK_WRITE, smbus_block_write, dev, addr, cmd, count, buf, retval); 	retval; })
#endif
#endif


extern int z_impl_smbus_block_read(const struct device * dev, uint16_t addr, uint8_t cmd, uint8_t * count, uint8_t * buf);

__pinned_func
static inline int smbus_block_read(const struct device * dev, uint16_t addr, uint8_t cmd, uint8_t * count, uint8_t * buf)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; uint16_t val; } parm1 = { .val = addr };
		union { uintptr_t x; uint8_t val; } parm2 = { .val = cmd };
		union { uintptr_t x; uint8_t * val; } parm3 = { .val = count };
		union { uintptr_t x; uint8_t * val; } parm4 = { .val = buf };
		return (int) arch_syscall_invoke5(parm0.x, parm1.x, parm2.x, parm3.x, parm4.x, K_SYSCALL_SMBUS_BLOCK_READ);
	}
#endif
	compiler_barrier();
	return z_impl_smbus_block_read(dev, addr, cmd, count, buf);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define smbus_block_read(dev, addr, cmd, count, buf) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_SMBUS_BLOCK_READ, smbus_block_read, dev, addr, cmd, count, buf); 	retval = smbus_block_read(dev, addr, cmd, count, buf); 	sys_port_trace_syscall_exit(K_SYSCALL_SMBUS_BLOCK_READ, smbus_block_read, dev, addr, cmd, count, buf, retval); 	retval; })
#endif
#endif


extern int z_impl_smbus_block_pcall(const struct device * dev, uint16_t addr, uint8_t cmd, uint8_t snd_count, uint8_t * snd_buf, uint8_t * rcv_count, uint8_t * rcv_buf);

__pinned_func
static inline int smbus_block_pcall(const struct device * dev, uint16_t addr, uint8_t cmd, uint8_t snd_count, uint8_t * snd_buf, uint8_t * rcv_count, uint8_t * rcv_buf)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; uint16_t val; } parm1 = { .val = addr };
		union { uintptr_t x; uint8_t val; } parm2 = { .val = cmd };
		union { uintptr_t x; uint8_t val; } parm3 = { .val = snd_count };
		union { uintptr_t x; uint8_t * val; } parm4 = { .val = snd_buf };
		union { uintptr_t x; uint8_t * val; } parm5 = { .val = rcv_count };
		union { uintptr_t x; uint8_t * val; } parm6 = { .val = rcv_buf };
		uintptr_t more[] = {
			parm5.x,
			parm6.x
		};
		return (int) arch_syscall_invoke6(parm0.x, parm1.x, parm2.x, parm3.x, parm4.x, (uintptr_t) &more, K_SYSCALL_SMBUS_BLOCK_PCALL);
	}
#endif
	compiler_barrier();
	return z_impl_smbus_block_pcall(dev, addr, cmd, snd_count, snd_buf, rcv_count, rcv_buf);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define smbus_block_pcall(dev, addr, cmd, snd_count, snd_buf, rcv_count, rcv_buf) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_SMBUS_BLOCK_PCALL, smbus_block_pcall, dev, addr, cmd, snd_count, snd_buf, rcv_count, rcv_buf); 	retval = smbus_block_pcall(dev, addr, cmd, snd_count, snd_buf, rcv_count, rcv_buf); 	sys_port_trace_syscall_exit(K_SYSCALL_SMBUS_BLOCK_PCALL, smbus_block_pcall, dev, addr, cmd, snd_count, snd_buf, rcv_count, rcv_buf, retval); 	retval; })
#endif
#endif


#ifdef __cplusplus
}
#endif

#endif
#endif /* include guard */
