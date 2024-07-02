import time
import serial


 
baud_rate = 9600
Serial_port = 'COM3'

# Open the serial port
ArduinoData = serial.Serial( Serial_port, baud_rate, timeout=1)

# Wait for the serial connection to establish
time.sleep(1)

#simulates a void loop 
while True:
    while(ArduinoData.inWaiting()==0):
        pass
    dataPacket=ArduinoData.readline()
    print(dataPacket)

    


