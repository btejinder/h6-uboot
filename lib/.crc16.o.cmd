cmd_lib/crc16.o := /opt/h6/h6_1.4.2/lichee/brandy/u-boot-2014.07/../gcc-linaro/bin/arm-linux-gnueabi-gcc -Wp,-MD,lib/.crc16.o.d  -nostdinc -isystem /opt/h6/h6_1.4.2/lichee/brandy/gcc-linaro/bin/../lib/gcc/arm-linux-gnueabi/4.6.3/include -Iinclude  -I/opt/h6/h6_1.4.2/lichee/brandy/u-boot-2014.07/arch/arm/include -I/opt/h6/h6_1.4.2/lichee/brandy/u-boot-2014.07/include/openssl -D__KERNEL__ -DCONFIG_SYS_TEXT_BASE=0x4A000000 -Wall -Wstrict-prototypes -Wno-format-security -fno-builtin -ffreestanding -Os -fno-stack-protector -g -fstack-usage -Wno-format-nonliteral -march=armv7-a -Werror -mno-unaligned-access -DCONFIG_ARM -D__ARM__ -marm -mno-thumb-interwork -mabi=aapcs-linux -mword-relocations -ffunction-sections -fdata-sections -fno-common -ffixed-r9 -msoft-float -pipe    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(crc16)"  -D"KBUILD_MODNAME=KBUILD_STR(crc16)" -c -o lib/crc16.o lib/crc16.c

source_lib/crc16.o := lib/crc16.c

deps_lib/crc16.o := \
  include/crc.h \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
  include/linux/posix_types.h \
  include/linux/stddef.h \
  /opt/h6/h6_1.4.2/lichee/brandy/u-boot-2014.07/arch/arm/include/asm/posix_types.h \
  /opt/h6/h6_1.4.2/lichee/brandy/u-boot-2014.07/arch/arm/include/asm/types.h \
    $(wildcard include/config/arm64.h) \
  /opt/h6/h6_1.4.2/lichee/brandy/gcc-linaro/bin/../lib/gcc/arm-linux-gnueabi/4.6.3/include/stdbool.h \

lib/crc16.o: $(deps_lib/crc16.o)

$(deps_lib/crc16.o):
