# esp32-irrigation-system
Edge-AI irrigation using ESP32

![Platform](https://img.shields.io/badge/Platform-ESP32--S3-blue)
![Domain](https://img.shields.io/badge/Domain-Smart%20Agriculture-green)
![Type](https://img.shields.io/badge/System-Edge--AI-orange)
![Status](https://img.shields.io/badge/Project-Completed-brightgreen)

## Overview
This project implements an Edge-AI enabled smart irrigation system using ESP32-S3 and a soil moisture sensor to automate water supply based on real-time soil conditions. The system performs on-device decision making without relying on cloud infrastructure, making it efficient, low-cost, and suitable for small-scale agriculture.

## System Architecture
![System Diagram](images/diagram.png)

## Circuit Diagram
![Circuit Diagram](images/circuit.png)

## Features
- Real-time soil moisture monitoring  
- Automatic water pump control  
- Edge-based decision making (no cloud required)  
- Low-cost and energy-efficient system  
- Suitable for small-scale farming  

## Hardware Components
- ESP32-S3  
- Soil Moisture Sensor  
- Relay Module  
- Water Pump  
- Power Supply  

## Working Principle
The soil moisture sensor continuously measures soil conditions and sends analog data to the ESP32-S3. The microcontroller processes this data using its ADC and applies a threshold-based decision logic. If the soil is dry, the relay activates the water pump; otherwise, the pump remains off. This entire process is executed locally, enabling real-time and efficient irrigation control.

## System Flow
1. Soil moisture sensor reads real-time data  
2. ESP32-S3 processes data using ADC  
3. Threshold-based logic is applied  
4. Relay module controls water pump  
5. Irrigation is automated based on soil condition  

## Code
The implementation code for the ESP32-S3 is available in the `/code` folder.

## Future Improvements
- Integration with IoT dashboard  
- Machine learning-based prediction  
- Mobile application for monitoring and control  

## License
This project is for academic and research purposes.

## Author
Bhavya Kapoor
