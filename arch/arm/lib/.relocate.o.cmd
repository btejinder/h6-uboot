cmd_arch/arm/lib/relocate.o := /opt/h6/h6_1.4.2/lichee/brandy/u-boot-2014.07/../gcc-linaro/bin/arm-linux-gnueabi-gcc -Wp,-MD,arch/arm/lib/.relocate.o.d  -nostdinc -isystem /opt/h6/h6_1.4.2/lichee/brandy/gcc-linaro/bin/../lib/gcc/arm-linux-gnueabi/4.6.3/include -Iinclude  -I/opt/h6/h6_1.4.2/lichee/brandy/u-boot-2014.07/arch/arm/include -I/opt/h6/h6_1.4.2/lichee/brandy/u-boot-2014.07/include/openssl -D__KERNEL__ -DCONFIG_SYS_TEXT_BASE=0x4A000000  -D__ASSEMBLY__ -g       -march=armv7-a -Werror  -mno-unaligned-access -DCONFIG_ARM -D__ARM__ -marm -mno-thumb-interwork  -mabi=aapcs-linux  -mword-relocations  -ffunction-sections -fdata-sections -fno-common -ffixed-r9  -msoft-float  -pipe     -c -o arch/arm/lib/relocate.o arch/arm/lib/relocate.S

source_arch/arm/lib/relocate.o := arch/arm/lib/relocate.S

deps_arch/arm/lib/relocate.o := \
  include/linux/linkage.h \
  /opt/h6/h6_1.4.2/lichee/brandy/u-boot-2014.07/arch/arm/include/asm/linkage.h \

arch/arm/lib/relocate.o: $(deps_arch/arm/lib/relocate.o)

$(deps_arch/arm/lib/relocate.o):
