#include <iostream>
#include <stdexcept>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <ros/ros.h>
#include <cv_bridge/cv_bridge.h>
#include <cv_bridge/CvBridge.h>
#include <image_transport/image_transport.h>
#include <sensor_msgs/Image.h>
#include <sensor_msgs/image_encodings.h>
#include <environment/Interpreter.hpp>
#include <libsvm/svmWrapper.hpp>

class Tracker {
private:
	std::string subscribed_topic_name, published_topic_name;
	cv::Mat original_image;

}