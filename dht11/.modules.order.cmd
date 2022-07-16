cmd_/home/pi/example01-dht11/modules.order := {   echo /home/pi/example01-dht11/dht11_dev.ko; :; } | awk '!x[$$0]++' - > /home/pi/example01-dht11/modules.order
