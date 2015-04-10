cmd_scripts/mod/devicetable-offsets.s := /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/scripts/gcc-wrapper.py /home/darkspr1te/Desktop/Android/cm11/prebuilt/linux-x86/toolchain/arm-eabi-4.4.3/bin/arm-eabi-gcc -Wp,-MD,scripts/mod/.devicetable-offsets.s.d  -nostdinc -isystem /home/darkspr1te/Desktop/Android/cm11/prebuilt/linux-x86/toolchain/arm-eabi-4.4.3/bin/../lib/gcc/arm-eabi/4.4.3/include -I/home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include -Iarch/arm/include/generated  -I/home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include -Iinclude -I/home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi -Iinclude/generated/uapi -include /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/kconfig.h  -I/home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/scripts/mod -Iscripts/mod -D__KERNEL__ -mlittle-endian   -I/home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/mach-msm/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -Os -fno-dwarf2-cfi-asm -fstack-protector -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=1024 -fomit-frame-pointer -g -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(devicetable_offsets)"  -D"KBUILD_MODNAME=KBUILD_STR(devicetable_offsets)" -fverbose-asm -S -o scripts/mod/devicetable-offsets.s /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/scripts/mod/devicetable-offsets.c

source_scripts/mod/devicetable-offsets.s := /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/scripts/mod/devicetable-offsets.c

deps_scripts/mod/devicetable-offsets.s := \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/kbuild.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/mod_devicetable.h \
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
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/uuid.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/uuid.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/linux/string.h \
    $(wildcard include/config/binary/printf.h) \
  /home/darkspr1te/Desktop/Android/cm11/prebuilt/linux-x86/toolchain/arm-eabi-4.4.3/bin/../lib/gcc/arm-eabi/4.4.3/include/stdarg.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/include/uapi/linux/string.h \
  /home/darkspr1te/Desktop/Android/sm-a500/sources/sm-a500h-sea-Kernel/arch/arm/include/asm/string.h \

scripts/mod/devicetable-offsets.s: $(deps_scripts/mod/devicetable-offsets.s)

$(deps_scripts/mod/devicetable-offsets.s):
