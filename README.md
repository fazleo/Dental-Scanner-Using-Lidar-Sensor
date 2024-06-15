# Dental Structure Scanner Using LiDAR

This repository contains the code, documentation, and resources for our final year college project: "Dental Structure Scanner Using LiDAR Technology". This project aims to revolutionize dental diagnostics by leveraging LiDAR technology to create precise 3D models of dental structures.

## Project Overview

Traditional orthodontic evaluations often rely on physical measurements and impressions, which can be uncomfortable and time-consuming for patients. Our project integrates LiDAR sensors with Arduino technology to develop a cutting-edge dental scanner that captures highly precise 3D models of a patient's dental anatomy.

### Objectives

1. **Research and Development**: Explore the integration of LiDAR technology into dental scanners.
2. **3D Structure Generation**: Leverage LiDAR capabilities to produce precise 3D structures of dental anatomy.
3. **Cost Efficiency**: Investigate ways to enhance cost efficiency in the development of the dental scanner.
4. **Feasibility Study**: Conduct a comprehensive feasibility study to assess the practicality of integrating LiDAR technology into dental diagnostics.
5. **Technological Innovation**: Pioneer a transformative approach to dental imaging by combining LiDAR capabilities with traditional scanning methods.
6. **Prioritize Patient Safety and Comfort**: Design the system to operate through non-invasive laser scanning, eliminating the need for ionizing radiation exposure.

## Project Components

### Hardware

- **LiDAR Sensor**: Captures the 3D structure of dental anatomy.
- **Arduino Microcontroller**: Controls the servo motors and processes data from the LiDAR sensor.
- **Servo Motors**: Move the LiDAR sensor to capture the full geometry of the dental structure.

### Software

- **Arduino Code**: Controls the servo motors and acquires data from the LiDAR sensor.
- **Python Scripts**: Process the data, generate point clouds, and visualize the 3D models.

## Repository Structure

- **docs/**: Contains the final project report and images used in the documentation.
- **code/**: Contains the Arduino and Python code used in the project.
- **data/**: Contains sample data used for testing and visualization.

## Getting Started

### Prerequisites

- Arduino IDE
- Python 3.x
- Required Python libraries: `serial`, `csv`, `numpy`, `open3d`

### Installation

1. **Clone the repository**:
    ```bash
    git clone https://github.com/fazleo/Dental-Scanner-Using-Lidar-Sensor.git
    cd Dental-Structure-Scanner-Using-LiDAR
    ```

2. **Set up the Arduino**:
    - Open `code/arduino/lidar_scanner.ino` in the Arduino IDE.
    - Upload the code to your Arduino board.

3. **Set up the Python environment**:
    ```bash
    pip install -r requirements.txt
    ```

### Usage

1. **Run the data acquisition script**:
    ```bash
    python code/python/data_acquisition.py
    ```

2. **Visualize the point cloud**:
    ```bash
    python code/python/point_cloud_visualization.py
    ```

## Results

The project successfully demonstrates the feasibility of using LiDAR technology for dental applications. The generated 3D models provide detailed and accurate representations of dental structures, which can significantly enhance diagnostic and treatment planning processes.

## Future Work

- **Enhanced Scanning Mechanism**: Explore alternative materials and design principles for improved stability and precision.
- **Algorithm Enhancement**: Optimize data processing algorithms for better accuracy and efficiency.
- **Real-Time Data Processing**: Implement real-time data processing capabilities for immediate visualization and interaction with 3D models.

## Contributors

- Deepak AV (MEA20CS025)
- Faslu Rahman TP (MEA20CS030)
- Marwan Pookattil Abdul Kabeer (MEA20CS046)

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgements

We would like to thank our project guide Dr. Shanid Malayil and all the teaching and non-teaching staff of the Department of Computer Science & Engineering at MEA Engineering College for their support and guidance.

