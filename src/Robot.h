//You can not modify this file!
#ifndef ROBOT_H
#define ROBOT_H

#include "Robot.h"
#include <string>

using namespace std;

class Robot {
public:
    Robot(string name, string os);
    string getName();
    string getOs();
    void addSensor(string sensor);
    int getNumSensor();
    void printStats();

private:
    string m_name;
    string m_os;
    vector<string> m_sensors;

};


#endif