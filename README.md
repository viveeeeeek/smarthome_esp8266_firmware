Video Demo
----------

Check out this video to see the Smarthome ESP8266 Firmware in action:

[![Watch the video]([https://img.youtube.com/vi/VIDEO_ID_HERE/maxresdefault.jpg)](https://www.youtube.com/watch?v=VIDEO_ID_HERE](https://user-images.githubusercontent.com/64553247/226548935-150840d4-c913-4992-adc9-b7c06e9714e9.mp4))





SmartHome ESP8266 Firmware 🚀
=============================

Overview
--------

This repository contains the source code for an ESP8266 firmware that allows you to control an LED using a mobile app via the Blynk cloud API. The firmware is written in C++ and can be easily modified to control other devices such as TVs or speakers.

https://user-images.githubusercontent.com/64553247/226548890-21973a4d-5bc6-4d0b-82bf-eae109b09442.mp4



Features
--------

-   Uses the Blynk cloud API to change the status of an LED connected to an ESP8266 board.
-   Includes the WiFiManager library to dynamically change the WiFi SSID and password for the ESP8266 board.
-   Supports OTA (Over-The-Air) firmware updates.
-   Easy to modify and extend for other IoT projects.

Getting Started
---------------

### Prerequisites

To use this firmware, you will need the following:

-   An ESP8266 board (e.g., NodeMCU).
-   The Arduino IDE with the ESP8266 boards package installed..
-   A Blynk account and auth token.
-   The WiFiManager and Blynk libraries installed in the Arduino IDE.

### Installation

1.  Clone this repository to your computer.
2.  Open the `smarthome_esp8266_firmware.ino` file in the Arduino IDE.
3.  Modify the sketch as needed to fit your specific hardware and network settings.
4.  Compile and upload the firmware to your ESP8266 board.

### Usage

1.  Open the Blynk cloud dashboard and create a new device using your auth token.
2.  Create the new virtual pin (V1).
3.  Update the Blynk API endpoint and auth token in the `smarthome` flutetr app repository.
4.  Build the Flutter app and install it on your mobile device.
5.  Test the firmware by toggling the button widget in the Smarthome flutter app and observing the LED.

Contributing
------------

If you find any issues with the firmware or want to contribute to its development, please create an issue or pull request on this repository.

License
-------

This firmware is licensed under the MIT License. See the LICENSE file for more information.

Acknowledgements
----------------

-   [Blynk](https://blynk.io/) - a platform for building amazing interfaces for IoT projects.
-   [WiFiManager](https://github.com/tzapu/WiFiManager) - a library for dynamically changing the WiFi SSID and password for ESP8266 boards.
