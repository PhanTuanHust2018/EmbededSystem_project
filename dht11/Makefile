obj-m := dht11_dev.o
dht11_dev-objs := system_timer.o gpio.o dht11.o driver.o
PWD  := $(shell pwd)
KERNELDIR := /lib/modules/$(shell uname -r)/build


all:
	$(MAKE) -C /lib/modules/$(shell uname -r)/build/ M=$(PWD) modules
clean:
	$(MAKE) -C /lib/modules/$(shell uname -r)/build/ M=$(PWD) clean


