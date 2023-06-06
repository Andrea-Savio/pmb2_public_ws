#include "ros/ros.h"
#include "my_pmb2_training/scan_raw_filter.h"
#include <std_msgs/String.h>
#include <sensor_msgs/LaserScan.h>
#include <vector>

template<>
void Scan_Raw_Filter<sensor_msgs::LaserScan, sensor_msgs::LaserScan>::subscriberCallback(const sensor_msgs::LaserScan::ConstPtr& old_scan)
{
	sensor_msgs::LaserScan filtered_scan;

	filtered_scan.header.seq = old_scan->header.seq;
	filtered_scan.header.stamp.sec = old_scan->header.stamp.sec;
	filtered_scan.header.stamp.nsec = old_scan->header.stamp.nsec;
	filtered_scan.header.frame_id = old_scan->header.frame_id;
	filtered_scan.angle_min = old_scan->angle_min;
	filtered_scan.angle_max = old_scan->angle_max;
	filtered_scan.angle_increment = old_scan->angle_increment;
	filtered_scan.time_increment = old_scan->time_increment;
	filtered_scan.scan_time = old_scan->scan_time;
	filtered_scan.range_min = old_scan->range_min;
	filtered_scan.range_max = old_scan->range_max;
	for(int i=LASER_POINTS_TO_SKIP; i < (old_scan->ranges.size() - LASER_POINTS_TO_SKIP); i++)
	{
		filtered_scan.ranges.push_back(old_scan->ranges[i]);
	}
	for(int i=LASER_POINTS_TO_SKIP; i < (old_scan->intensities.size() - LASER_POINTS_TO_SKIP); i++)
	{
		filtered_scan.intensities.push_back(old_scan->intensities[i]);
	}
	
	filter_publisher.publish(filtered_scan);
}

int main(int argc, char **argv)
{
	ros::init(argc, argv, "scan_raw_filter");
	Scan_Raw_Filter<sensor_msgs::LaserScan, sensor_msgs::LaserScan> scan_raw_filter("scan_raw_filtered","scan_raw",1000);
	ros::spin();

	return 0;
}
