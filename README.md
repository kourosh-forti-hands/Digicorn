# Digicorn
Using the **DigiSpark** to "Unicorn" work colleague who don't lock their computers.

The Digispark is an Attiny85 based microcontroller development board similar to the Arduino line, only cheaper, smaller, and a bit less powerful.

## Prerequisites
1. Digispark
    - You can find these things for less than two dollars on some sites and even cheap when bought in bulk.
        * http://digistump.com/products/1?id=1&sort=0&ex=USD
        * http://a.co/bT8tFCX

3. Arduino IDE installed:
    - Download the Arduino IDE here
        * https://www.arduino.cc/en/Main/Software

3. Victim must have Outlook installed since that's how I programmed this script. 




## Setup

- Seytonic over on Youtube has an ecellent setup video and a bunch of other small projects:
    * https://youtu.be/fGmGBa-4cYQ

1. First, get the drivers for the digispark and install DPinst64:
    - https://github.com/digistump/DigistumpArduino/releases

2. Then in the Arduino IDE go to File->Prefrences->Additional Boards Manger URLs.
    - Additional Board Manager URL: http://digistump.com/package_digistump_index.json

3. Next click on Tools in the Arduino IDE->Boards->**Boards Manager**.
    1. Where it says Type, you want to click the box and go to Contributed. 
    2. Now click anywhere on Digistump AVR Boards by Digistump.
    3. An install button should appear in the lower right corner for you to click. (This may take a bit to install)

4. Once finished go back into Tools->Boards->Digispark(Default - 16.5mhz)

5. While the Digispark is unplugged open DigicornV1.ino

6. Finally Click upload and wait for it to compile you will be promted to plug in the device.
    1. Plug in your Digispark and wait till it says completed.
    2. Unplug the Digispark quickly or it will start to run the script on your system.

7. Now you are ready to plug the Digicorn into your victims system.

## Tips & Tricks

The Digispark has a five second delay on start up to allow it to be programmed but this can be removed with a custom firmaware online. You will have to add a button or wire to the digispark to override this for programming, but I do like this idea for this solution.



DigiKeyboard Source Code: https://github.com/digistump/DigisparkArduinoIntegration/blob/master/libraries/DigisparkKeyboard/DigiKeyboard.h



**Here are the specs for you nerds:**

- Support for the Arduino IDE 1.0+ (OSX/Win/Linux)
- Power via USB or External Source - 5v or 7-35v (12v or less recommended, automatic selection)
- On-board 500ma 5V Regulator
- Built-in USB
- 6 I/O Pins (2 are used for USB only if your program actively communicates over USB, otherwise you can use all 6 even if you are programming via USB)
- 8k Flash Memory (about 6k after bootloader) <- **So script sizes can be limited**
- I2C and SPI (vis USI)
- PWM on 3 pins (more possible with Software PWM)
- ADC on 4 pins
- Power LED and Test/Status LED
