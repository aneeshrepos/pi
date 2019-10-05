import gpiozero
button = gpiozero.Button(17)
led = gpiozero.LED(4)
while True:
      if button.is_pressed:
        print("button pressed")
        led.on()
      else:
        led.off()
        print("button not pressed")
