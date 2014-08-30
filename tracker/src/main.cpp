#include <tracker/tracker.hpp>

int main(){
	std::string node_name = argv[1];
	ros::init(argc, argv, node_name);
	ros::NodeHandle node_handle;
	

	for (int i = 1; i < argc; i++) {  
  		if (argv[i][0] != '-') {
    	 break;
  		}   
	}

	

}