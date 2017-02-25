import serial
from time import sleep

ser = serial.Serial('/dev/ttyACM0', 9600)

sleep(2);
ser.write(b'off');
