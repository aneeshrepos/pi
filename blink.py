import gpiozero
import time

led = gpiozero.LED(4)
n=1

while n<11:
   led.on()
   time.sleep(0.5)
   led.off()
   time.sleep(0.5)
   n=n+1
