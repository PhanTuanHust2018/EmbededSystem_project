import os
import time
time.sleep(25)

mode = "00"

dev = os.open("/dev/2servo", os.O_WRONLY)
os.write(dev, bytes(mode, 'utf-8'))
os.close(dev)

time.sleep(3)

mode = "11"

dev = os.open("/dev/2servo", os.O_WRONLY)
os.write(dev, bytes(mode, 'utf-8'))
os.close(dev)

time.sleep(3)


mode = "22"

dev = os.open("/dev/2servo", os.O_WRONLY)
os.write(dev, bytes(mode, 'utf-8'))
os.close(dev)

time.sleep(3)

mode = "00"

dev = os.open("/dev/2servo", os.O_WRONLY)
os.write(dev, bytes(mode, 'utf-8'))
os.close(dev)

time.sleep(4)


mode = "10"

dev = os.open("/dev/2servo", os.O_WRONLY)
os.write(dev, bytes(mode, 'utf-8'))
os.close(dev)

time.sleep(5)
