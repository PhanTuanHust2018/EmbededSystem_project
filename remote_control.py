import lirc
import time

client = lirc.Client()

try:
    client.send_start('aspanasonic', 'on')
    time.sleep(1)
    client.send_stop('aspanasonic', 'on')
    time.sleep(5)
    client.send_start('aspanasonic', 'off')
    time.sleep(1)
    client.send_stop('aspanasonic', 'off')
except lirc.exceptions.LircdCommandFailureError as error:
    print('Unable to send the power key!')
    print(error)  # Error has more info on what lircd sent back.
