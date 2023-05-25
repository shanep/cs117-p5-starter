#ifndef ELECTRONIC_ELECTRONIC_H
#define ELECTRONIC_ELECTRONIC_H

#include <iostream>
#include <string>

using namespace std;

class Electronic
{

public:
    Electronic(int idNum, string serialNum, string powerSource);

    int getId();
    string getSerialNum();
    string getPowerSource();

    void setID(int id);
    void setSerialNum(string sNum);
    void setPowerSource(string pSrc);
    void print();

private:
    int idNum;
    string serialNum;
    string powerSource;
};

#endif // ELECTRONIC_ELECTRONIC_H