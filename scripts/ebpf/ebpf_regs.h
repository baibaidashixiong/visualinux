#ifndef VISUALINUX_EBPF_REGS_H
#define VISUALINUX_EBPF_REGS_H

#if defined(__TARGET_ARCH_loongarch)
#include <uapi/asm/ptrace.h>
#elif defined(__TARGET_ARCH_x86)
struct pt_regs {
    __u64 r15, r14, r13, r12, bp, bx, r11, r10, r9, r8;
    __u64 ax, cx, dx, si, di, orig_ax, ip, cs, flags, sp, ss;
};
#endif

#endif
