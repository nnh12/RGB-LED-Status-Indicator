#include "ros/ros.h"
#include "hwctrl/CanFrame.h"


 int main(int argc, char **argv)
 {
     ros::init(argc, argv, "led_node");

     ros::NodeHandle n;

     ros::Publisher m_can_rx_pub = n.advertise<hwctrl::CanFrame>("can_frames_tx", 2);

     ros::Rate loop_rate(10);

     while(ros::ok())
    {
        hwctrl::CanFrame msg;
        msg.can_id = 10;
        msg.can_dlc= 3;

        msg.data[0] = 255;
        msg.data[1] = 100;
        msg.data[2] = 50;
        ROS_INFO("Publishing to can_frames_rx");
        m_can_rx_pub.publish(msg);
        loop_rate.sleep();
    }

    return 0;

 }


