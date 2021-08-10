
#include <ros/ros.h>
#include <move_base_msgs/MoveBaseAction.h>
#include <actionlib/client/simple_action_client.h>
#include <tf/transform_broadcaster.h>
#include <sstream>

typedef actionlib::SimpleActionClient<move_base_msgs::MoveBaseAction> MoveBaseClient;

int main(int argc, char* argv[])
{
    ros::init(argc, argv, "navigation_goals");
    MoveBaseClient client("move_base", true);
    while(!client.waitForServer(ros::Duration(5.0))){
        ROS_INFO("wating for move base action server");
    }

    

    return 0;
}