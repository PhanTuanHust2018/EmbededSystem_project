cmd_/home/pi/Embedded_System_Project/servo-driver/modules.order := {   echo /home/pi/Embedded_System_Project/servo-driver/servo_driver.ko; :; } | awk '!x[$$0]++' - > /home/pi/Embedded_System_Project/servo-driver/modules.order