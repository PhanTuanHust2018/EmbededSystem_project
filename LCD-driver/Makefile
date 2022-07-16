
obj-m +=  lcdi2c.o

all:
	# $(MAKE) -C /lib/modules/$(shell uname -r)/build/ M=$(PWD) modules
	make ARCH=arm CROSS_COMPILE=/bin/arm-linux-gnueabihf- -C /home/phantuan/Documents/Mon_HT_Nhung/rpi-kernel/linux M=$(PWD) modules

clean:
	$(MAKE) -C /lib/modules/$(shell uname -r)/build/ M=$(PWD) clean

