#ifndef SCAN_RAW_FILTER_H
#define SCAN_RAW_FILTER_H

#include <ros/ros.h>
#include <string>

template<typename PublisherType, typename SubscriberType>
class Scan_Raw_Filter
{
public:
	static const int LASER_POINTS_TO_SKIP = 20;
	Scan_Raw_Filter(){}
	Scan_Raw_Filter(std::string publishTopicName, std::string subscribeTopicName, int queueSize) 
	{
		filter_publisher = n.advertise<PublisherType>(publishTopicName, queueSize);
		filter_subscriber = n.subscribe<SubscriberType>(subscribeTopicName, queueSize, &Scan_Raw_Filter::subscriberCallback,this);
	}
	void subscriberCallback(const typename SubscriberType::ConstPtr& receivedMsg);

protected:
	ros::Subscriber filter_subscriber;
	ros::Publisher filter_publisher;
	ros::NodeHandle n;
};

#endif
