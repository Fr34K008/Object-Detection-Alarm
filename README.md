# Object-Detection-Alarm
A simple Arduino project to detect objects and sound the alarm using arduino UNO, Buzzer and IR infrared obstacle avoidance sensor

# Components
![components](https://user-images.githubusercontent.com/70096616/154021224-d1f87632-e6e3-4fb4-be42-fd89a724f9b0.png)


# Circuit Diagram/Wiring 
![Object-Detection-Alarm](https://user-images.githubusercontent.com/70096616/134899013-669e4b06-e044-4cd8-941e-6013db12b3cc.png)


# Scehematics
![schematics](https://user-images.githubusercontent.com/70096616/154023388-19f2a4eb-8a5c-4c41-a688-8a24609389e2.png)

# How does this project work ?
This project demonstrates how motion detectors work using its general principle. The prototype was developed using simple and affordable components which can be found in electronics and robotics shops. The idea is simple, if the motion sensor detects movement in a certain range of area of its coverage, it will trigger the alarm or any other mechanism to notify the user. Here in this project, Infrared (IR) sensor is used as motion sensor to detect movement or objects, Light Emitting Diode (LED) as the indicator and Buzzer as the alarm. The IR sensor used in this project has the area coverage of 2 cm to 10 cm approximately which is pretty low but cost friendly compared to other IR sensors on the market.  In order for our IR sensor to work, it is interfaced with the digital pin no 4 in the arduino Uno R3 board with power supply of 5.0V. The Buzzer and LED is interfaced with digital pin 2 and 6 on the arduino along with a resister set in series connection with the LED on the breadboard.
The sensor pin in the arduino board is set in input mode whereas the LED and buzzer is in output mode. As soon as the power is supplied through the board, our IR sensor starts monitoring the area of its coverage for movements.  If the sensor notices any movement or detects any objects within 2 cm to 10 cm (approximately), the LED indicator is switched on by the arduino as the buzzer starts playing a tone in 500 Hz of frequency which plays for 200 milliseconds (0.02 seconds) before restarting the tone. As soon as the object or the movement is out of the coverage area of the sensor, the LED indicator is switched off and the sensor goes back to its monitoring stage. In general terms , the sensor either detects an object or a movement within its range, it does some operations which may include notifying the user or turning some other mechanism on. This principle can also be used in some other cases. For instance, using IR or Ultrasonic senor as switches based on the distance of the user's hand from the sensor.
Further uses of this concept will be demonstrated in future with different combinations of ideas and components.

# Project in Action
https://user-images.githubusercontent.com/70096616/134903071-aeb402f4-9c9b-4a76-b98e-2047258dd00c.mp4

