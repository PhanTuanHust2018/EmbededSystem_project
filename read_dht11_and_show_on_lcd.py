import os
import time
path_dht11_dev = "/dev/dht11_dev"
path_lcd_dev = "/dev/lcdi2c"
i = 0
dev = os.open("/sys/devices/virtual/alphalcd/lcdi2c/clear",os.O_WRONLY)
os.write(dev,b'1')
os.close(dev)
while(i< 100):
    fd_dht11 = os.open(path_dht11_dev, os.O_RDONLY)
    n=50
    readBytes = os.read(fd_dht11, n)
    # Print the bytes read
    print(readBytes)
    # close the file descriptor
    os.close(fd_dht11)
    fd_lcd = os.open(path_lcd_dev,os.O_RDWR)
    ret = os.write(fd_lcd,readBytes)
    os.close(fd_lcd)
    time.sleep(4)
    i+=1
