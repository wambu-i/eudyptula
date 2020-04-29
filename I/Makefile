ifneq ($(KERNELRELEASE),)
	obj-m	:= hello.o
else
	KERNELDIR	:= /home/wambui/kernels/staging/
	PWD		:= $(shell pwd)

default:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules

endif

