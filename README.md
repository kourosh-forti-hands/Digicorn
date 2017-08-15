# Digicorn
Using the **DigiSpark** to "Unicorn" work colleague who don't lock their computers.

The Digispark is an Attiny85 based microcontroller development board similar to the Arduino line, only cheaper, smaller, and a bit less powerful.

You can find these things for less than two dollars on some sites and even cheap when bought in bulk.
http://digistump.com/products/1?id=1&sort=0&ex=USD

http://a.co/bT8tFCX




## Setup
Seytonic over on Youtube has an ecellent setup video and a bunch of other small projects:

https://youtu.be/fGmGBa-4cYQ

First off you are going to want to make sure to have the Arduino IDE install:

Download the arduino IDE: https://www.arduino.cc/en/Main/Software

Next get the drivers for the digispark and install DPinst64:

https://github.com/digistump/DigistumpArduino/releases

Then in the Arduino IDE go to File->Prefrences->Additional Boards Manger URLs.

Additional Board Manager URL: http://digistump.com/package_digistump_index.json

Still following? Good.

Next click on Tools in the Arduino IDE. From there click on the Boards submenu(Under Wifi101 Updater) then **Boards Manager**.
Where it says Type you want to click the box and go to Contributed. Now click on anywhere on Digistump AVR Boards by Digistump.
An install button should appear in the lower right corner for you to click. (This may take a bit to install)

Once finished go back into Tools->Boards->Digispark(Default - 16.5mhz)
Finally open File->Examples->DigisparkKeyboard


DigiKeyboard Source Code: https://github.com/digistump/DigisparkArduinoIntegration/blob/master/libraries/DigisparkKeyboard/DigiKeyboard.h















**Here are the specs for you nerds:**

Support for the Arduino IDE 1.0+ (OSX/Win/Linux)

Power via USB or External Source - 5v or 7-35v (12v or less recommended, automatic selection)

On-board 500ma 5V Regulator

Built-in USB

6 I/O Pins (2 are used for USB only if your program actively communicates over USB, otherwise you can use all 6 even if you are programming via USB)

8k Flash Memory (about 6k after bootloader) <- **So script sizes can be limited**

I2C and SPI (vis USI)

PWM on 3 pins (more possible with Software PWM)

ADC on 4 pins

Power LED and Test/Status LED
