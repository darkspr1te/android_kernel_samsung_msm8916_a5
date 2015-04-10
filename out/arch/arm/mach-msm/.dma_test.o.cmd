cmd_arch/arm/mach-msm/dma_test.o := /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/scripts/gcc-wrapper.py /home/darkspr1te/Desktop/Android/cm11/prebuilt/linux-x86/toolchain/arm-eabi-4.4.3/bin/arm-eabi-gcc -Wp,-MD,arch/arm/mach-msm/.dma_test.o.d  -nostdinc -isystem /home/darkspr1te/Desktop/Android/cm11/prebuilt/linux-x86/toolchain/arm-eabi-4.4.3/bin/../lib/gcc/arm-eabi/4.4.3/include -I/home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include -Iarch/arm/include/generated  -I/home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include -Iinclude -I/home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi -Iinclude/generated/uapi -include /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/kconfig.h  -I/home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/mach-msm -Iarch/arm/mach-msm -D__KERNEL__ -mlittle-endian   -I/home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/mach-msm/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -Os -fno-dwarf2-cfi-asm -fstack-protector -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=1024 -fomit-frame-pointer -g -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack  -DMODULE  -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(dma_test)"  -D"KBUILD_MODNAME=KBUILD_STR(dma_test)" -c -o arch/arm/mach-msm/.tmp_dma_test.o /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/mach-msm/dma_test.c

source_arch/arm/mach-msm/dma_test.o := /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/mach-msm/dma_test.c

deps_arch/arm/mach-msm/dma_test.o := \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/slab.h \
    $(wildcard include/config/slab/debug.h) \
    $(wildcard include/config/debug/objects.h) \
    $(wildcard include/config/kmemcheck.h) \
    $(wildcard include/config/failslab.h) \
    $(wildcard include/config/slob.h) \
    $(wildcard include/config/slab.h) \
    $(wildcard include/config/zone/dma.h) \
    $(wildcard include/config/slub.h) \
    $(wildcard include/config/numa.h) \
    $(wildcard include/config/debug/slab.h) \
    $(wildcard include/config/tracing.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/gfp.h \
    $(wildcard include/config/cma.h) \
    $(wildcard include/config/highmem.h) \
    $(wildcard include/config/zone/dma32.h) \
    $(wildcard include/config/pm/sleep.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/mmzone.h \
    $(wildcard include/config/force/max/zoneorder.h) \
    $(wildcard include/config/memory/isolation.h) \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/memcg.h) \
    $(wildcard include/config/compaction.h) \
    $(wildcard include/config/memory/hotplug.h) \
    $(wildcard include/config/sparsemem.h) \
    $(wildcard include/config/have/memblock/node/map.h) \
    $(wildcard include/config/discontigmem.h) \
    $(wildcard include/config/flat/node/mem/map.h) \
    $(wildcard include/config/no/bootmem.h) \
    $(wildcard include/config/numa/balancing.h) \
    $(wildcard include/config/have/memory/present.h) \
    $(wildcard include/config/have/memoryless/nodes.h) \
    $(wildcard include/config/need/node/memmap/size.h) \
    $(wildcard include/config/need/multiple/nodes.h) \
    $(wildcard include/config/have/arch/early/pfn/to/nid.h) \
    $(wildcard include/config/flatmem.h) \
    $(wildcard include/config/sparsemem/extreme.h) \
    $(wildcard include/config/have/arch/pfn/valid.h) \
    $(wildcard include/config/nodes/span/other/nodes.h) \
    $(wildcard include/config/holes/in/zone.h) \
    $(wildcard include/config/arch/has/holes/memorymodel.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/spinlock.h \
    $(wildcard include/config/debug/spinlock.h) \
    $(wildcard include/config/generic/lockbreak.h) \
    $(wildcard include/config/preempt.h) \
    $(wildcard include/config/debug/lock/alloc.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/typecheck.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/preempt.h \
    $(wildcard include/config/debug/preempt.h) \
    $(wildcard include/config/preempt/tracer.h) \
    $(wildcard include/config/context/tracking.h) \
    $(wildcard include/config/preempt/count.h) \
    $(wildcard include/config/preempt/notifiers.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/thread_info.h \
    $(wildcard include/config/compat.h) \
    $(wildcard include/config/debug/stack/usage.h) \
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
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/kernel.h \
    $(wildcard include/config/preempt/voluntary.h) \
    $(wildcard include/config/debug/atomic/sleep.h) \
    $(wildcard include/config/prove/locking.h) \
    $(wildcard include/config/ring/buffer.h) \
    $(wildcard include/config/ftrace/mcount/record.h) \
  /home/darkspr1te/Desktop/Android/cm11/prebuilt/linux-x86/toolchain/arm-eabi-4.4.3/bin/../lib/gcc/arm-eabi/4.4.3/include/stdarg.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/bitops.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/bitops.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/irqflags.h \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/irqsoff/tracer.h) \
    $(wildcard include/config/trace/irqflags/support.h) \
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
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/bottom_half.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/spinlock_types.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/spinlock_types.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/lockdep.h \
    $(wildcard include/config/lockdep.h) \
    $(wildcard include/config/lock/stat.h) \
    $(wildcard include/config/prove/rcu.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/rwlock_types.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/spinlock.h \
    $(wildcard include/config/msm/krait/wfe/fixup.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/processor.h \
    $(wildcard include/config/have/hw/breakpoint.h) \
    $(wildcard include/config/mmu.h) \
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
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/wait.h \
  arch/arm/include/generated/asm/current.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/asm-generic/current.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/wait.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/cache.h \
    $(wildcard include/config/arch/has/cache/line/size.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/cache.h \
    $(wildcard include/config/arm/l1/cache/shift.h) \
    $(wildcard include/config/aeabi.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/threads.h \
    $(wildcard include/config/nr/cpus.h) \
    $(wildcard include/config/base/small.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/numa.h \
    $(wildcard include/config/nodes/shift.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/seqlock.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/nodemask.h \
    $(wildcard include/config/movable/node.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/bitmap.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/string.h \
    $(wildcard include/config/binary/printf.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/string.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/string.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/pageblock-flags.h \
    $(wildcard include/config/hugetlb/page.h) \
    $(wildcard include/config/hugetlb/page/size/variable.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/page-flags-layout.h \
    $(wildcard include/config/sparsemem/vmemmap.h) \
  include/generated/bounds.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/page.h \
    $(wildcard include/config/cpu/copy/v4wt.h) \
    $(wildcard include/config/cpu/copy/v4wb.h) \
    $(wildcard include/config/cpu/copy/feroceon.h) \
    $(wildcard include/config/cpu/copy/fa.h) \
    $(wildcard include/config/cpu/xscale.h) \
    $(wildcard include/config/cpu/copy/v6.h) \
    $(wildcard include/config/kuser/helpers.h) \
    $(wildcard include/config/memory/hotplug/sparse.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/glue.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/pgtable-2level-types.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/memory.h \
    $(wildcard include/config/need/mach/memory/h.h) \
    $(wildcard include/config/page/offset.h) \
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
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/asm-generic/getorder.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/memory_hotplug.h \
    $(wildcard include/config/memory/hotremove.h) \
    $(wildcard include/config/have/arch/nodedata/extension.h) \
    $(wildcard include/config/have/bootmem/info/node.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/notifier.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/errno.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/errno.h \
  arch/arm/include/generated/asm/errno.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/asm-generic/errno.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/asm-generic/errno-base.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/mutex.h \
    $(wildcard include/config/debug/mutexes.h) \
    $(wildcard include/config/mutex/spin/on/owner.h) \
    $(wildcard include/config/have/arch/mutex/cpu/relax.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/rwsem.h \
    $(wildcard include/config/rwsem/generic/spinlock.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/rwsem-spinlock.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/srcu.h \
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
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/cpumask.h \
    $(wildcard include/config/cpumask/offstack.h) \
    $(wildcard include/config/debug/per/cpu/maps.h) \
    $(wildcard include/config/disable/obsolete/cpumask/functions.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/completion.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/debugobjects.h \
    $(wildcard include/config/debug/objects/free.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/rcutree.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/workqueue.h \
    $(wildcard include/config/debug/objects/work.h) \
    $(wildcard include/config/freezer.h) \
    $(wildcard include/config/sysfs.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/timer.h \
    $(wildcard include/config/timer/stats.h) \
    $(wildcard include/config/debug/objects/timers.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/ktime.h \
    $(wildcard include/config/ktime/scalar.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/time.h \
    $(wildcard include/config/arch/uses/gettimeoffset.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/math64.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/time.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/jiffies.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/timex.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/timex.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/param.h \
  arch/arm/include/generated/asm/param.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/asm-generic/param.h \
    $(wildcard include/config/hz.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/asm-generic/param.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/timex.h \
    $(wildcard include/config/arch/multiplatform.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/mach-msm/include/mach/timex.h \
    $(wildcard include/config/have/arch/has/current/timer.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/topology.h \
    $(wildcard include/config/sched/smt.h) \
    $(wildcard include/config/sched/mc.h) \
    $(wildcard include/config/sched/book.h) \
    $(wildcard include/config/use/percpu/numa/node/id.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/smp.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/smp.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/percpu.h \
    $(wildcard include/config/need/per/cpu/embed/first/chunk.h) \
    $(wildcard include/config/need/per/cpu/page/first/chunk.h) \
    $(wildcard include/config/have/setup/per/cpu/area.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/pfn.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/percpu.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/asm-generic/percpu.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/percpu-defs.h \
    $(wildcard include/config/debug/force/weak/per/cpu.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/topology.h \
    $(wildcard include/config/arm/cpu/topology.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/asm-generic/topology.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/mmdebug.h \
    $(wildcard include/config/debug/vm.h) \
    $(wildcard include/config/debug/virtual.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/slub_def.h \
    $(wildcard include/config/slub/stats.h) \
    $(wildcard include/config/memcg/kmem.h) \
    $(wildcard include/config/slub/debug.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/kobject.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/sysfs.h \
    $(wildcard include/config/mmc/bkops/node/uid.h) \
    $(wildcard include/config/mmc/bkops/node/gid.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/kobject_ns.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/kref.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/kmemleak.h \
    $(wildcard include/config/debug/kmemleak.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/dma-mapping.h \
    $(wildcard include/config/has/dma.h) \
    $(wildcard include/config/arch/has/dma/set/coherent/mask.h) \
    $(wildcard include/config/have/dma/attrs.h) \
    $(wildcard include/config/need/dma/map/state.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/device.h \
    $(wildcard include/config/debug/devres.h) \
    $(wildcard include/config/acpi.h) \
    $(wildcard include/config/pinctrl.h) \
    $(wildcard include/config/devtmpfs.h) \
    $(wildcard include/config/sysfs/deprecated.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/ioport.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/klist.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/pinctrl/devinfo.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/pinctrl/consumer.h \
    $(wildcard include/config/pinconf.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/err.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/seq_file.h \
    $(wildcard include/config/user/ns.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/pinctrl/pinctrl-state.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/pm.h \
    $(wildcard include/config/vt/console/sleep.h) \
    $(wildcard include/config/pm.h) \
    $(wildcard include/config/pm/runtime.h) \
    $(wildcard include/config/pm/clk.h) \
    $(wildcard include/config/pm/generic/domains.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/ratelimit.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/uidgid.h \
    $(wildcard include/config/uidgid/strict/type/checks.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/highuid.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/device.h \
    $(wildcard include/config/dmabounce.h) \
    $(wildcard include/config/iommu/api.h) \
    $(wildcard include/config/arm/dma/use/iommu.h) \
    $(wildcard include/config/arch/omap.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/pm_wakeup.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/dma-attrs.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/dma-direction.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/scatterlist.h \
    $(wildcard include/config/debug/sg.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/mm.h \
    $(wildcard include/config/strict/memory/rwx.h) \
    $(wildcard include/config/fix/movable/zone.h) \
    $(wildcard include/config/sysctl.h) \
    $(wildcard include/config/x86.h) \
    $(wildcard include/config/ppc.h) \
    $(wildcard include/config/parisc.h) \
    $(wildcard include/config/metag.h) \
    $(wildcard include/config/ia64.h) \
    $(wildcard include/config/stack/growsup.h) \
    $(wildcard include/config/transparent/hugepage.h) \
    $(wildcard include/config/ksm.h) \
    $(wildcard include/config/debug/vm/rb.h) \
    $(wildcard include/config/arch/uses/numa/prot/none.h) \
    $(wildcard include/config/proc/fs.h) \
    $(wildcard include/config/debug/pagealloc.h) \
    $(wildcard include/config/hibernation.h) \
    $(wildcard include/config/use/user/accessible/timers.h) \
    $(wildcard include/config/hugetlbfs.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/rbtree.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/debug_locks.h \
    $(wildcard include/config/debug/locking/api/selftests.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/mm_types.h \
    $(wildcard include/config/split/ptlock/cpus.h) \
    $(wildcard include/config/have/cmpxchg/double.h) \
    $(wildcard include/config/have/aligned/struct/page.h) \
    $(wildcard include/config/want/page/debug/flags.h) \
    $(wildcard include/config/page/owner.h) \
    $(wildcard include/config/aio.h) \
    $(wildcard include/config/mm/owner.h) \
    $(wildcard include/config/mmu/notifier.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/auxvec.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/auxvec.h \
  arch/arm/include/generated/asm/auxvec.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/asm-generic/auxvec.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/stacktrace.h \
    $(wildcard include/config/stacktrace.h) \
    $(wildcard include/config/user/stacktrace/support.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/page-debug-flags.h \
    $(wildcard include/config/page/poisoning.h) \
    $(wildcard include/config/page/guard.h) \
    $(wildcard include/config/page/debug/something/else.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/uprobes.h \
    $(wildcard include/config/arch/supports/uprobes.h) \
    $(wildcard include/config/uprobes.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/mmu.h \
    $(wildcard include/config/cpu/has/asid.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/range.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/bit_spinlock.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/shrinker.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/pgtable.h \
    $(wildcard include/config/highpte.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/proc-fns.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/glue-proc.h \
    $(wildcard include/config/cpu/arm7tdmi.h) \
    $(wildcard include/config/cpu/arm720t.h) \
    $(wildcard include/config/cpu/arm740t.h) \
    $(wildcard include/config/cpu/arm9tdmi.h) \
    $(wildcard include/config/cpu/arm920t.h) \
    $(wildcard include/config/cpu/arm922t.h) \
    $(wildcard include/config/cpu/arm925t.h) \
    $(wildcard include/config/cpu/arm926t.h) \
    $(wildcard include/config/cpu/arm940t.h) \
    $(wildcard include/config/cpu/arm946e.h) \
    $(wildcard include/config/cpu/arm1020.h) \
    $(wildcard include/config/cpu/arm1020e.h) \
    $(wildcard include/config/cpu/arm1022.h) \
    $(wildcard include/config/cpu/arm1026.h) \
    $(wildcard include/config/cpu/mohawk.h) \
    $(wildcard include/config/cpu/feroceon.h) \
    $(wildcard include/config/cpu/v6k.h) \
    $(wildcard include/config/cpu/v7.h) \
    $(wildcard include/config/cpu/pj4b.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/asm-generic/pgtable-nopud.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/pgtable-hwdef.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/pgtable-2level-hwdef.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/pgtable-2level.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/asm-generic/pgtable.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/page-flags.h \
    $(wildcard include/config/pageflags/extended.h) \
    $(wildcard include/config/arch/uses/pg/uncached.h) \
    $(wildcard include/config/memory/failure.h) \
    $(wildcard include/config/swap.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/huge_mm.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/vmstat.h \
    $(wildcard include/config/vm/event/counters.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/vm_event_item.h \
    $(wildcard include/config/migration.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/scatterlist.h \
    $(wildcard include/config/arm/has/sg/chain.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/asm-generic/scatterlist.h \
    $(wildcard include/config/need/sg/dma/length.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/io.h \
    $(wildcard include/config/need/mach/io/h.h) \
    $(wildcard include/config/pci.h) \
    $(wildcard include/config/pcmcia/soc/common.h) \
    $(wildcard include/config/isa.h) \
    $(wildcard include/config/pccard.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/blk_types.h \
    $(wildcard include/config/block.h) \
    $(wildcard include/config/blk/cgroup.h) \
    $(wildcard include/config/blk/dev/integrity.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/asm-generic/pci_iomap.h \
    $(wildcard include/config/no/generic/pci/ioport/map.h) \
    $(wildcard include/config/generic/pci/iomap.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/msm_rtb.h \
    $(wildcard include/config/msm/rtb.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/xen/xen.h \
    $(wildcard include/config/xen.h) \
    $(wildcard include/config/xen/dom0.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/mach-msm/include/mach/io.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/dma-mapping.h \
    $(wildcard include/config/debug/cma/trace.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/dma-debug.h \
    $(wildcard include/config/dma/api/debug.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/asm-generic/dma-coherent.h \
    $(wildcard include/config/have/generic/dma/coherent.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/asm-generic/dma-mapping-common.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/kmemcheck.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/module.h \
    $(wildcard include/config/module/sig.h) \
    $(wildcard include/config/kallsyms.h) \
    $(wildcard include/config/tracepoints.h) \
    $(wildcard include/config/event/tracing.h) \
    $(wildcard include/config/module/unload.h) \
    $(wildcard include/config/constructors.h) \
    $(wildcard include/config/debug/set/module/ronx.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/stat.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/uapi/asm/stat.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/stat.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/kmod.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/sysctl.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/sysctl.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/elf.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/elf.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/user.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/elf.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/elf-em.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/moduleparam.h \
    $(wildcard include/config/alpha.h) \
    $(wildcard include/config/ppc64.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/tracepoint.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/static_key.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/jump_label.h \
    $(wildcard include/config/jump/label.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/module.h \
    $(wildcard include/config/arm/unwind.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/asm-generic/module.h \
    $(wildcard include/config/have/mod/arch/specific.h) \
    $(wildcard include/config/modules/use/elf/rel.h) \
    $(wildcard include/config/modules/use/elf/rela.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/fs.h \
    $(wildcard include/config/fs/posix/acl.h) \
    $(wildcard include/config/security.h) \
    $(wildcard include/config/quota.h) \
    $(wildcard include/config/fsnotify.h) \
    $(wildcard include/config/ima.h) \
    $(wildcard include/config/epoll.h) \
    $(wildcard include/config/debug/writecount.h) \
    $(wildcard include/config/file/locking.h) \
    $(wildcard include/config/auditsyscall.h) \
    $(wildcard include/config/fs/xip.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/kdev_t.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/kdev_t.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/dcache.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/rculist.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/rculist_bl.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/list_bl.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/path.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/radix-tree.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/pid.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/capability.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/capability.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/semaphore.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/fiemap.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/migrate_mode.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/percpu-rwsem.h \
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
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/miscdevice.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/major.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/uaccess.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/uaccess.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/mach-msm/include/mach/dma.h \
    $(wildcard include/config/arch/fsm9xxx.h) \
    $(wildcard include/config/arch/msm8x60.h) \
    $(wildcard include/config/arch/msm9615.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/mach-msm/include/mach/msm_iomap.h \
    $(wildcard include/config/debug/msm/uart1.h) \
    $(wildcard include/config/debug/msm/uart2.h) \
    $(wildcard include/config/debug/msm/uart3.h) \
    $(wildcard include/config/msm/debug/uart/phys.h) \
  arch/arm/include/generated/asm/sizes.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/asm-generic/sizes.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/mach-msm/include/mach/msm_iomap-8974.h \
    $(wildcard include/config/debug/msm8974/uart.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/mach-msm/include/mach/msm_iomap-8084.h \
    $(wildcard include/config/debug/apq8084/uart.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/mach-msm/include/mach/msm_iomap-8092.h \
    $(wildcard include/config/debug/mpq8092/uart.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/mach-msm/include/mach/msm_iomap-8916.h \
    $(wildcard include/config/debug/msm8916/uart.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/mach-msm/include/mach/msm_iomap-8226.h \
    $(wildcard include/config/debug/msm8226/uart.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/mach-msm/include/mach/msm_iomap-8610.h \
    $(wildcard include/config/debug/msm8610/uart.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/mach-msm/include/mach/msm_iomap-9630.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/mach-msm/include/mach/msm_iomap-zirc.h \
    $(wildcard include/config/debug/msmzirc/uart.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/mach-msm/include/mach/msm_iomap-fsm9900.h \
    $(wildcard include/config/debug/fsm9900/uart.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/mach-msm/include/mach/msm_iomap-samarium.h \
    $(wildcard include/config/debug/msmsamarium/uart.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/mach-msm/include/mach/dma_test.h \

arch/arm/mach-msm/dma_test.o: $(deps_arch/arm/mach-msm/dma_test.o)

$(deps_arch/arm/mach-msm/dma_test.o):
