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


This section presents the results of our LiDAR-based dental structure scanner project. We conducted several tests to evaluate the accuracy and precision of the generated 3D point clouds compared to the actual scanned subjects. The tests included scanning simple geometric shapes, an inverse T-shaped object, and a dental mold. Below are the detailed results and comparisons for each test.

### Box Test

**Scanned Subject:**
- A simple box with well-defined edges and flat surfaces.
 <img src="https://github.com/fazleo/Dental-Scanner-Using-Lidar-Sensor/assets/75975431/265b1fe6-c586-42c7-ac44-8068f01f406c" width="600" height="600">

**Generated 3D Point Cloud:**
- The point cloud data formed a grid-like pattern of blue dots, representing precise points in space where the LiDAR’s laser beam reflected off the surface of the box.
- The uniform distribution of points across the box’s surfaces illustrates the scanner’s ability to systematically and accurately document the object’s form.
 <img src="https://github.com/fazleo/Dental-Scanner-Using-Lidar-Sensor/assets/75975431/91a8d013-bc52-47c8-9c69-ffc7f71c31f9" width="600" height="600">


**Comparison:**
- The point cloud accurately captured the box’s edges and flat surfaces.
- Minor noise was present, likely due to reflections or minor movements, but it did not significantly detract from the overall accuracy.





### Inverse T-shaped Object Test

**Scanned Subject:**
- An inverse T-shaped object with complex contours and varying dimensions.
- <img src="https://github.com/fazleo/Dental-Scanner-Using-Lidar-Sensor/assets/75975431/2fd0aea6-6ac3-4c3c-aade-4b38cd1f7a68" width="800" height="600">

**Generated 3D Point Cloud:**
- The point cloud data captured the unique contours and edges of the inverse T-shaped object with remarkable fidelity.
- The dense array of points coalesced into a discernible form, mirroring the object’s geometry.
 <img src="https://github.com/fazleo/Dental-Scanner-Using-Lidar-Sensor/assets/75975431/0853bdf3-97a4-446f-90d5-ab727eee6698" width="500" height="400">

**Comparison:**
- The point cloud accurately represented the intricate details of the object, including sharp corners, protrusions, and recesses.
- Some noise was present, but the overall shape and fine details were well-captured.



### Dental Mold Test

**Scanned Subject:**
- A dental mold representing the complex geometry of dental structures.
<img src="https://github.com/fazleo/Dental-Scanner-Using-Lidar-Sensor/assets/75975431/a733fa82-a978-4b0a-86bf-ac8712ff2d2c" width="600" height="700">


**Generated 3D Point Cloud:**
- The point cloud data provided a detailed representation of the dental mold’s surface topology.
- The data captured the unique morphology of each tooth, including cusps, ridges, and fissures.
 <img src="https://github.com/fazleo/Dental-Scanner-Using-Lidar-Sensor/assets/75975431/a1bb4f6e-09ac-43d4-9433-1aa987aa08c3" width="800" height="700">


**Comparison:**
- The point cloud accurately captured the dental structures, providing a comprehensive dataset for further analysis.
- Some limitations were noted due to the 2D LiDAR system, which lacked depth information necessary for a complete 3D model.




### Conclusion

The results demonstrate the effectiveness of our LiDAR-based dental structure scanner in capturing detailed 3D point clouds of various objects. While some noise and limitations were observed, the overall accuracy and precision of the scans are promising. Future work will focus on enhancing the scanning mechanism, improving data processing algorithms, and integrating advanced 3D LiDAR technology to overcome current limitations.

## Future Work

- **Enhanced Scanning Mechanism**: Explore alternative materials and design principles for improved stability and precision.
- **Algorithm Enhancement**: Optimize data processing algorithms for better accuracy and efficiency.
- **Real-Time Data Processing**: Implement real-time data processing capabilities for immediate visualization and interaction with 3D models.

## Contributors

- Deepak AV (MEA20CS025)
- Faslu Rahman TP (MEA20CS030)
- Marwan Pookattil Abdul Kabeer (MEA20CS046)


## Acknowledgements

We would like to thank our project guide Dr. Shanid Malayil and all the teaching and non-teaching staff of the Department of Computer Science & Engineering at MEA Engineering College for their support and guidance.

