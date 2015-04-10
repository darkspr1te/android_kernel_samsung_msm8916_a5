cmd_arch/arm/mach-msm/perf_debug.o := /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/scripts/gcc-wrapper.py /home/darkspr1te/Desktop/Android/cm11/prebuilt/linux-x86/toolchain/arm-eabi-4.4.3/bin/arm-eabi-gcc -Wp,-MD,arch/arm/mach-msm/.perf_debug.o.d  -nostdinc -isystem /home/darkspr1te/Desktop/Android/cm11/prebuilt/linux-x86/toolchain/arm-eabi-4.4.3/bin/../lib/gcc/arm-eabi/4.4.3/include -I/home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include -Iarch/arm/include/generated  -I/home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include -Iinclude -I/home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi -Iinclude/generated/uapi -include /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/kconfig.h  -I/home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/mach-msm -Iarch/arm/mach-msm -D__KERNEL__ -mlittle-endian   -I/home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/mach-msm/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -Os -fno-dwarf2-cfi-asm -fstack-protector -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=1024 -fomit-frame-pointer -g -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(perf_debug)"  -D"KBUILD_MODNAME=KBUILD_STR(perf_debug)" -c -o arch/arm/mach-msm/.tmp_perf_debug.o /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/mach-msm/perf_debug.c

source_arch/arm/mach-msm/perf_debug.o := /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/mach-msm/perf_debug.c

deps_arch/arm/mach-msm/perf_debug.o := \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/types.h \
  arch/arm/include/generated/asm/types.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/asm-generic/types.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/asm-generic/int-ll64.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/asm-generic/int-ll64.h \
  arch/arm/include/generated/asm/bitsperlong.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/asm-generic/bitsperlong.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/asm-generic/bitsperlong.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/posix_types.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/stddef.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/stddef.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/compiler-gcc4.h \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/uapi/asm/posix_types.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/asm-generic/posix_types.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/uaccess.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/preempt.h \
    $(wildcard include/config/debug/preempt.h) \
    $(wildcard include/config/preempt/tracer.h) \
    $(wildcard include/config/preempt.h) \
    $(wildcard include/config/context/tracking.h) \
    $(wildcard include/config/preempt/count.h) \
    $(wildcard include/config/preempt/notifiers.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/thread_info.h \
    $(wildcard include/config/compat.h) \
    $(wildcard include/config/debug/stack/usage.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/bug.h \
    $(wildcard include/config/generic/bug.h) \
    $(wildcard include/config/panic/on/data/corruption.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/bug.h \
    $(wildcard include/config/bug.h) \
    $(wildcard include/config/thumb2/kernel.h) \
    $(wildcard include/config/debug/bugverbose.h) \
    $(wildcard include/config/arm/lpae.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/linkage.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/stringify.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/linkage.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/asm-generic/bug.h \
    $(wildcard include/config/generic/bug/relative/pointers.h) \
    $(wildcard include/config/smp.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/kernel.h \
    $(wildcard include/config/preempt/voluntary.h) \
    $(wildcard include/config/debug/atomic/sleep.h) \
    $(wildcard include/config/prove/locking.h) \
    $(wildcard include/config/ring/buffer.h) \
    $(wildcard include/config/tracing.h) \
    $(wildcard include/config/ftrace/mcount/record.h) \
  /home/darkspr1te/Desktop/Android/cm11/prebuilt/linux-x86/toolchain/arm-eabi-4.4.3/bin/../lib/gcc/arm-eabi/4.4.3/include/stdarg.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/bitops.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/bitops.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/irqflags.h \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/irqsoff/tracer.h) \
    $(wildcard include/config/trace/irqflags/support.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/typecheck.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/irqflags.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/arm/thumb.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/uapi/asm/ptrace.h \
    $(wildcard include/config/cpu/endian/be8.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/hwcap.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/uapi/asm/hwcap.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/asm-generic/bitops/non-atomic.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/asm-generic/bitops/fls64.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/asm-generic/bitops/sched.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/asm-generic/bitops/hweight.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/asm-generic/bitops/arch_hweight.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/asm-generic/bitops/const_hweight.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/asm-generic/bitops/lock.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/asm-generic/bitops/le.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/uapi/asm/byteorder.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/byteorder/little_endian.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/byteorder/little_endian.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/swab.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/swab.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/swab.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/uapi/asm/swab.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/byteorder/generic.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/asm-generic/bitops/ext2-atomic-setbit.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/log2.h \
    $(wildcard include/config/arch/has/ilog2/u32.h) \
    $(wildcard include/config/arch/has/ilog2/u64.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/printk.h \
    $(wildcard include/config/early/printk.h) \
    $(wildcard include/config/printk.h) \
    $(wildcard include/config/dynamic/debug.h) \
    $(wildcard include/config/oops/log/buffer.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/init.h \
    $(wildcard include/config/broken/rodata.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/kern_levels.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/dynamic_debug.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/kernel.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/sysinfo.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/div64.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/compiler.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/thread_info.h \
    $(wildcard include/config/crunch.h) \
    $(wildcard include/config/arm/thumbee.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/fpstate.h \
    $(wildcard include/config/vfpv3.h) \
    $(wildcard include/config/iwmmxt.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/domain.h \
    $(wildcard include/config/verify/permission/fault.h) \
    $(wildcard include/config/io/36.h) \
    $(wildcard include/config/cpu/use/domains.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/barrier.h \
    $(wildcard include/config/cpu/32v6k.h) \
    $(wildcard include/config/cpu/xsc3.h) \
    $(wildcard include/config/cpu/fa526.h) \
    $(wildcard include/config/arch/has/barriers.h) \
    $(wildcard include/config/arm/dma/mem/bufferable.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/outercache.h \
    $(wildcard include/config/outer/cache/sync.h) \
    $(wildcard include/config/outer/cache.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/list.h \
    $(wildcard include/config/debug/list.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/poison.h \
    $(wildcard include/config/illegal/pointer/value.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/const.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/uaccess.h \
    $(wildcard include/config/mmu.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/string.h \
    $(wildcard include/config/binary/printf.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/string.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/string.h \
  arch/arm/include/generated/asm/errno.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/asm-generic/errno.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/asm-generic/errno-base.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/memory.h \
    $(wildcard include/config/need/mach/memory/h.h) \
    $(wildcard include/config/page/offset.h) \
    $(wildcard include/config/highmem.h) \
    $(wildcard include/config/dram/size.h) \
    $(wildcard include/config/dram/base.h) \
    $(wildcard include/config/have/tcm.h) \
    $(wildcard include/config/arm/patch/phys/virt.h) \
    $(wildcard include/config/phys/offset.h) \
    $(wildcard include/config/virt/to/bus.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/sizes.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/mach-msm/include/mach/memory.h \
    $(wildcard include/config/cache/l2x0.h) \
    $(wildcard include/config/arch/msm/scorpion.h) \
    $(wildcard include/config/arch/msm/krait.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/asm-generic/memory_model.h \
    $(wildcard include/config/flatmem.h) \
    $(wildcard include/config/discontigmem.h) \
    $(wildcard include/config/sparsemem/vmemmap.h) \
    $(wildcard include/config/sparsemem.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/debugfs.h \
    $(wildcard include/config/debug/fs.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/fs.h \
    $(wildcard include/config/sysfs.h) \
    $(wildcard include/config/fs/posix/acl.h) \
    $(wildcard include/config/security.h) \
    $(wildcard include/config/quota.h) \
    $(wildcard include/config/fsnotify.h) \
    $(wildcard include/config/ima.h) \
    $(wildcard include/config/epoll.h) \
    $(wildcard include/config/debug/writecount.h) \
    $(wildcard include/config/file/locking.h) \
    $(wildcard include/config/debug/lock/alloc.h) \
    $(wildcard include/config/auditsyscall.h) \
    $(wildcard include/config/block.h) \
    $(wildcard include/config/fs/xip.h) \
    $(wildcard include/config/migration.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/wait.h \
    $(wildcard include/config/lockdep.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/spinlock.h \
    $(wildcard include/config/debug/spinlock.h) \
    $(wildcard include/config/generic/lockbreak.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/bottom_half.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/spinlock_types.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/spinlock_types.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/lockdep.h \
    $(wildcard include/config/lock/stat.h) \
    $(wildcard include/config/prove/rcu.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/rwlock_types.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/spinlock.h \
    $(wildcard include/config/msm/krait/wfe/fixup.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/processor.h \
    $(wildcard include/config/have/hw/breakpoint.h) \
    $(wildcard include/config/arm/errata/754327.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/hw_breakpoint.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/rwlock.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/spinlock_api_smp.h \
    $(wildcard include/config/inline/spin/lock.h) \
    $(wildcard include/config/inline/spin/lock/bh.h) \
    $(wildcard include/config/inline/spin/lock/irq.h) \
    $(wildcard include/config/inline/spin/lock/irqsave.h) \
    $(wildcard include/config/inline/spin/trylock.h) \
    $(wildcard include/config/inline/spin/trylock/bh.h) \
    $(wildcard include/config/uninline/spin/unlock.h) \
    $(wildcard include/config/inline/spin/unlock/bh.h) \
    $(wildcard include/config/inline/spin/unlock/irq.h) \
    $(wildcard include/config/inline/spin/unlock/irqrestore.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/rwlock_api_smp.h \
    $(wildcard include/config/inline/read/lock.h) \
    $(wildcard include/config/inline/write/lock.h) \
    $(wildcard include/config/inline/read/lock/bh.h) \
    $(wildcard include/config/inline/write/lock/bh.h) \
    $(wildcard include/config/inline/read/lock/irq.h) \
    $(wildcard include/config/inline/write/lock/irq.h) \
    $(wildcard include/config/inline/read/lock/irqsave.h) \
    $(wildcard include/config/inline/write/lock/irqsave.h) \
    $(wildcard include/config/inline/read/trylock.h) \
    $(wildcard include/config/inline/write/trylock.h) \
    $(wildcard include/config/inline/read/unlock.h) \
    $(wildcard include/config/inline/write/unlock.h) \
    $(wildcard include/config/inline/read/unlock/bh.h) \
    $(wildcard include/config/inline/write/unlock/bh.h) \
    $(wildcard include/config/inline/read/unlock/irq.h) \
    $(wildcard include/config/inline/write/unlock/irq.h) \
    $(wildcard include/config/inline/read/unlock/irqrestore.h) \
    $(wildcard include/config/inline/write/unlock/irqrestore.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/atomic.h \
    $(wildcard include/config/arch/has/atomic/or.h) \
    $(wildcard include/config/generic/atomic64.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/atomic.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/cmpxchg.h \
    $(wildcard include/config/cpu/sa1100.h) \
    $(wildcard include/config/cpu/sa110.h) \
    $(wildcard include/config/cpu/v6.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/asm-generic/cmpxchg-local.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/asm-generic/atomic-long.h \
  arch/arm/include/generated/asm/current.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/asm-generic/current.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/wait.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/kdev_t.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/kdev_t.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/dcache.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/rculist.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/rcupdate.h \
    $(wildcard include/config/rcu/torture/test.h) \
    $(wildcard include/config/tree/rcu.h) \
    $(wildcard include/config/tree/preempt/rcu.h) \
    $(wildcard include/config/rcu/trace.h) \
    $(wildcard include/config/preempt/rcu.h) \
    $(wildcard include/config/rcu/user/qs.h) \
    $(wildcard include/config/tiny/rcu.h) \
    $(wildcard include/config/tiny/preempt/rcu.h) \
    $(wildcard include/config/debug/objects/rcu/head.h) \
    $(wildcard include/config/hotplug/cpu.h) \
    $(wildcard include/config/rcu/nocb/cpu.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/cache.h \
    $(wildcard include/config/arch/has/cache/line/size.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/cache.h \
    $(wildcard include/config/arm/l1/cache/shift.h) \
    $(wildcard include/config/aeabi.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/threads.h \
    $(wildcard include/config/nr/cpus.h) \
    $(wildcard include/config/base/small.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/cpumask.h \
    $(wildcard include/config/cpumask/offstack.h) \
    $(wildcard include/config/debug/per/cpu/maps.h) \
    $(wildcard include/config/disable/obsolete/cpumask/functions.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/bitmap.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/seqlock.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/completion.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/debugobjects.h \
    $(wildcard include/config/debug/objects.h) \
    $(wildcard include/config/debug/objects/free.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/rcutree.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/rculist_bl.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/list_bl.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/bit_spinlock.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/path.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/stat.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/uapi/asm/stat.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/stat.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/time.h \
    $(wildcard include/config/arch/uses/gettimeoffset.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/math64.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/time.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/uidgid.h \
    $(wildcard include/config/uidgid/strict/type/checks.h) \
    $(wildcard include/config/user/ns.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/highuid.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/radix-tree.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/rbtree.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/pid.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/mutex.h \
    $(wildcard include/config/debug/mutexes.h) \
    $(wildcard include/config/mutex/spin/on/owner.h) \
    $(wildcard include/config/have/arch/mutex/cpu/relax.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/capability.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/capability.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/semaphore.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/fiemap.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/shrinker.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/migrate_mode.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/percpu-rwsem.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/rwsem.h \
    $(wildcard include/config/rwsem/generic/spinlock.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/rwsem-spinlock.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/percpu.h \
    $(wildcard include/config/need/per/cpu/embed/first/chunk.h) \
    $(wildcard include/config/need/per/cpu/page/first/chunk.h) \
    $(wildcard include/config/have/setup/per/cpu/area.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/smp.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/errno.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/errno.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/smp.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/pfn.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/percpu.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/asm-generic/percpu.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/percpu-defs.h \
    $(wildcard include/config/debug/force/weak/per/cpu.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/blk_types.h \
    $(wildcard include/config/blk/cgroup.h) \
    $(wildcard include/config/blk/dev/integrity.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/fs.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/limits.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/ioctl.h \
  arch/arm/include/generated/asm/ioctl.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/asm-generic/ioctl.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/asm-generic/ioctl.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/quota.h \
    $(wildcard include/config/quota/netlink/interface.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/percpu_counter.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/dqblk_xfs.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/dqblk_v1.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/dqblk_v2.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/dqblk_qtree.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/projid.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/quota.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/nfs_fs_i.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/fcntl.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/fcntl.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/uapi/asm/fcntl.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/asm-generic/fcntl.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/err.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/seq_file.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/nodemask.h \
    $(wildcard include/config/movable/node.h) \
    $(wildcard include/config/numa.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/numa.h \
    $(wildcard include/config/nodes/shift.h) \

arch/arm/mach-msm/perf_debug.o: $(deps_arch/arm/mach-msm/perf_debug.o)

$(deps_arch/arm/mach-msm/perf_debug.o):
