# Medicine Reminder Assistance System using 8051 Microcontroller

## Project Overview
This project presents a medicine reminder assistance system designed using the 8051 microcontroller. The system provides reminder alerts using an LED indicator and buzzer. The alert remains active until a push button is pressed, indicating acknowledgement from the patient or caretaker.

The aim of this project is to demonstrate basic embedded system design involving input-output interfacing and control logic implementation.

## Objective
To design a simple reminder system using a microcontroller that ensures acknowledgement before stopping the alert indication.

## Hardware Components
8051 Microcontroller  
Push Button Switch  
LED  
Buzzer  
Resistors  
Power Supply

## Software Used
Keil µVision IDE for program development  
Proteus for circuit simulation

## Working Principle
When the system is powered ON, the LED and buzzer generate a reminder signal.  
The microcontroller continuously monitors the push button connected to Port 3.  
When the button is pressed, the reminder is acknowledged and both LED and buzzer are turned OFF.  
After a delay, the reminder restarts for the next cycle.

## Files Included
medicine.c – Embedded C source code  
MPMC.hex – Compiled program used in simulation

## Features
Simple and low-cost embedded design  
Manual acknowledgement based reminder  
Continuous monitoring using polling method  
Easy implementation for learning purposes

## Future Improvements
Integration of real-time clock for automatic scheduling  
Wireless notification system  
IoT-based patient monitoring

## Conclusion
The project demonstrates the practical use of the 8051 microcontroller for implementing a basic reminder assistance system and provides understanding of embedded programming and hardware interfacing concepts.
