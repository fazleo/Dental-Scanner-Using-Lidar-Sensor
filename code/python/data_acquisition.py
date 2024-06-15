import serial
import csv


serial_port = 'COM8' # Change to your serial port (e.g., 'COM3' on Windows)
baud_rate = 115200  # Change to match baud rate in Arduino code
timeout_seconds = 5

# Open serial port
ser = serial.Serial(serial_port, baud_rate,timeout=timeout_seconds)

# Create CSV file and writer
csv_file = open('data6.csv', 'w', newline='')
csv_writer = csv.writer(csv_file)

try:
    print("Scanning...Please Wait....")
    while True:
        
        # Read data from serial port
        line = ser.readline().decode().strip()
        
        if line == '':
            print("Finished Scanning.. saved to data6.csv")
            break
        
        # Split data into fields (assuming comma-separated)
        data = line.split(',')
        
        # Write data to CSV file
        csv_writer.writerow(data)
        
        
        
        
        print(line)
        
except KeyboardInterrupt:
    # Close serial port and CSV file
    ser.close()
    csv_file.close()
