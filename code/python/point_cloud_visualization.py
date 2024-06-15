
import numpy as np
import open3d as o3d





# Load point cloud data from CSV file, ignoring any comment lines
point_cloud_data = np.loadtxt("data6.csv", delimiter=',', usecols=(0, 1, 2), skiprows=1, dtype=float, comments='"')

# Display the loaded data


print(point_cloud_data)
print(len(point_cloud_data))



# Create Open3D point cloud object
pcd = o3d.geometry.PointCloud()
pcd.points = o3d.utility.Vector3dVector(point_cloud_data)


o3d.io.write_point_cloud("point_cloud4.ply", pcd)
# Visualize point cloud using Open3D
o3d.visualization.draw_geometries([pcd])


