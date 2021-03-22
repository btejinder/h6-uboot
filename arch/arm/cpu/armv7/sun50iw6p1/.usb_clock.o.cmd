cmd_arch/arm/cpu/armv7/sun50iw6p1/usb_clock.o := /opt/h6/h6_1.4.2/lichee/brandy/u-boot-2014.07/../gcc-linaro/bin/arm-linux-gnueabi-gcc -Wp,-MD,arch/arm/cpu/armv7/sun50iw6p1/.usb_clock.o.d  -nostdinc -isystem /opt/h6/h6_1.4.2/lichee/brandy/gcc-linaro/bin/../lib/gcc/arm-linux-gnueabi/4.6.3/include -Iinclude  -I/opt/h6/h6_1.4.2/lichee/brandy/u-boot-2014.07/arch/arm/include -I/opt/h6/h6_1.4.2/lichee/brandy/u-boot-2014.07/include/openssl -D__KERNEL__ -DCONFIG_SYS_TEXT_BASE=0x4A000000 -Wall -Wstrict-prototypes -Wno-format-security -fno-builtin -ffreestanding -Os -fno-stack-protector -g -fstack-usage -Wno-format-nonliteral -march=armv7-a -Werror -mno-unaligned-access -DCONFIG_ARM -D__ARM__ -marm -mno-thumb-interwork -mabi=aapcs-linux -mword-relocations -ffunction-sections -fdata-sections -fno-common -ffixed-r9 -msoft-float -pipe    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(usb_clock)"  -D"KBUILD_MODNAME=KBUILD_STR(usb_clock)" -c -o arch/arm/cpu/armv7/sun50iw6p1/usb_clock.o arch/arm/cpu/armv7/sun50iw6p1/usb_clock.c

source_arch/arm/cpu/armv7/sun50iw6p1/usb_clock.o := arch/arm/cpu/armv7/sun50iw6p1/usb_clock.c

deps_arch/arm/cpu/armv7/sun50iw6p1/usb_clock.o := \
  /opt/h6/h6_1.4.2/lichee/brandy/u-boot-2014.07/arch/arm/include/asm/io.h \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
  include/linux/posix_types.h \
  include/linux/stddef.h \
  /opt/h6/h6_1.4.2/lichee/brandy/u-boot-2014.07/arch/arm/include/asm/posix_types.h \
  /opt/h6/h6_1.4.2/lichee/brandy/u-boot-2014.07/arch/arm/include/asm/types.h \
    $(wildcard include/config/arm64.h) \
  /opt/h6/h6_1.4.2/lichee/brandy/gcc-linaro/bin/../lib/gcc/arm-linux-gnueabi/4.6.3/include/stdbool.h \
  /opt/h6/h6_1.4.2/lichee/brandy/u-boot-2014.07/arch/arm/include/asm/byteorder.h \
  include/linux/byteorder/little_endian.h \
  include/linux/compiler.h \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  include/linux/compiler-gcc4.h \
  include/linux/byteorder/swab.h \
  include/linux/byteorder/generic.h \
  /opt/h6/h6_1.4.2/lichee/brandy/u-boot-2014.07/arch/arm/include/asm/memory.h \
    $(wildcard include/config/discontigmem.h) \
  include/iotrace.h \
    $(wildcard include/config/io/trace.h) \
    $(wildcard include/config/spl/build.h) \
  /opt/h6/h6_1.4.2/lichee/brandy/u-boot-2014.07/arch/arm/include/asm/arch/ccmu.h \
  /opt/h6/h6_1.4.2/lichee/brandy/u-boot-2014.07/arch/arm/include/asm/arch/platform.h \
  /opt/h6/h6_1.4.2/lichee/brandy/u-boot-2014.07/arch/arm/include/asm/arch/timer.h \
  /opt/h6/h6_1.4.2/lichee/brandy/u-boot-2014.07/arch/arm/include/asm/arch/platform.h \

arch/arm/cpu/armv7/sun50iw6p1/usb_clock.o: $(deps_arch/arm/cpu/armv7/sun50iw6p1/usb_clock.o)

$(deps_arch/arm/cpu/armv7/sun50iw6p1/usb_clock.o):
