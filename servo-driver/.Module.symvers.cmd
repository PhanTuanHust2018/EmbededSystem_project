cmd_/home/pi/Embedded_System_Project/servo-driver/Module.symvers := sed 's/\.ko$$/\.o/' /home/pi/Embedded_System_Project/servo-driver/modules.order | scripts/mod/modpost -m -a  -o /home/pi/Embedded_System_Project/servo-driver/Module.symvers -e -i Module.symvers   -T -