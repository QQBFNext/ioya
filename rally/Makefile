subdir-ccflags-y += -isystem$(CONFIG_XNU_SOURCES)/bsd \
	-isystem$(CONFIG_XNU_SOURCES)/osfmk \
	-isystem$(CONFIG_XNU_SOURCES)/osfmk/libsa \
	-isystem$(CONFIG_XNU_SOURCES)/libkern \
	-isystem$(CONFIG_XNU_SOURCES)/libsyscall/mach \
	-isystem$(CONFIG_XNU_SOURCES)/iokit \
	-isystem$(CONFIG_XNU_SOURCES)/pexpert \
	-isystem$(CONFIG_XNU_SOURCES)/EXTERNAL_HEADERS \
	-I$(srctree)/rally \
	-DRALLY -DKERNEL -DPRIVATE -DKERNEL_PRIVATE -DXNU_KERNEL_PRIVATE \
	-DPEXPERT_KERNEL_PRIVATE -DVMAPPLE -D__arm64__ -D__LITTLE_ENDIAN__ \
	-O3 -fblocks
obj-y := main.o hook.o serial.o device_tree.o patcher.o kernel_patches.o kernel_hooks.o exception_asm.o exception.o
obj-y += ../common/