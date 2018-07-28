# bluetoothbot
                                           BLUETOOTH CONTROL BOT
INTRODUCTION

 Build a robot which can receive commands via Bluetooth and work accordingly.  Develop an android app which allows the user to sends commands via Bluetooth.  Commands received by Bluetooth modem connected to Arduino UNO.  Arduino controls motor which allow the movement of robot.

 

BASIC REQUIREMENTS

 HC-05 BLUETOOOTH MODULE - For the communication between mobile phone and microcontroller Bluetooth module (HC-05) is used Low Power 1.8V Operation ,1.8 to 3.6V I/O.  Serial port Bluetooth module have a Bluetooth 2.0+EDR (enhanced data rate), 3Mbps modulation with complete 2.4GHZ radio transceiver and baseband. Using Bluetooth profile and android platform architecture different type of Bluetooth applications can be developed.

The robot is made up of an Arduino board, motor driver, 2 DC motors, Bluetooth module HC-05 & Ultrasonic sensor. Firstly, the data from the android app is sent as an input to the Bluetooth module which further gives it to the Arduino Uno, Uno is a controller which controls the signals and performs the assigned functions it understands which signals have to be forwarded to the motor driver so that it moves in particular order. Like in if the user has tapped the left button on the app the Arduino will send the signal to the motor driver to activate the left pins and accordingly move the motors so that the wheels can follow the direction.

APPLICATIONS
It can be used in various industries where human intervention is not desired. It can be used to develop robot with military applications.
