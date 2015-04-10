cmd_arch/arm/kernel/entry-common.o := /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/scripts/gcc-wrapper.py /home/darkspr1te/Desktop/Android/cm11/prebuilt/linux-x86/toolchain/arm-eabi-4.4.3/bin/arm-eabi-gcc -Wp,-MD,arch/arm/kernel/.entry-common.o.d  -nostdinc -isystem /home/darkspr1te/Desktop/Android/cm11/prebuilt/linux-x86/toolchain/arm-eabi-4.4.3/bin/../lib/gcc/arm-eabi/4.4.3/include -I/home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include -Iarch/arm/include/generated  -I/home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include -Iinclude -I/home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi -Iinclude/generated/uapi -include /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian   -I/home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/mach-msm/include -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -include asm/unified.h -msoft-float -gdwarf-2   -c -o arch/arm/kernel/entry-common.o /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/kernel/entry-common.S

source_arch/arm/kernel/entry-common.o := /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/kernel/entry-common.S

deps_arch/arm/kernel/entry-common.o := \
    $(wildcard include/config/need/ret/to/user.h) \
    $(wildcard include/config/function/tracer.h) \
    $(wildcard include/config/old/mcount.h) \
    $(wildcard include/config/frame/pointer.h) \
    $(wildcard include/config/function/graph/tracer.h) \
    $(wildcard include/config/dynamic/ftrace.h) \
    $(wildcard include/config/oabi/compat.h) \
    $(wildcard include/config/arm/thumb.h) \
    $(wildcard include/config/cpu/endian/be8.h) \
    $(wildcard include/config/aeabi.h) \
    $(wildcard include/config/alignment/trap.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/unistd.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/uapi/asm/unistd.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/ftrace.h \
    $(wildcard include/config/arm/unwind.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/unwind.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/kernel/entry-header.S \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/cpu/v6.h) \
    $(wildcard include/config/cpu/32v6k.h) \
    $(wildcard include/config/context/tracking.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/init.h \
    $(wildcard include/config/broken/rodata.h) \
    $(wildcard include/config/modules.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
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
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/linkage.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/stringify.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/linkage.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/assembler.h \
    $(wildcard include/config/cpu/feroceon.h) \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/cpu/use/domains.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/ptrace.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/uapi/asm/ptrace.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/hwcap.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/uapi/asm/hwcap.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/domain.h \
    $(wildcard include/config/verify/permission/fault.h) \
    $(wildcard include/config/io/36.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/opcodes-virt.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/opcodes.h \
    $(wildcard include/config/cpu/endian/be32.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/asm-offsets.h \
  include/generated/asm-offsets.h \
  arch/arm/include/generated/asm/errno.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/asm-generic/errno.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/asm-generic/errno-base.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/thread_info.h \
    $(wildcard include/config/crunch.h) \
    $(wildcard include/config/arm/thumbee.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/fpstate.h \
    $(wildcard include/config/vfpv3.h) \
    $(wildcard include/config/iwmmxt.h) \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/kernel/calls.S \

arch/arm/kernel/entry-common.o: $(deps_arch/arm/kernel/entry-common.o)

$(deps_arch/arm/kernel/entry-common.o):
