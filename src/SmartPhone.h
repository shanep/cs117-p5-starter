#ifndef ELECTRONIC_PHONE_H
#define ELECTRONIC_PHONE_H

#include "Computer.h"

class SmartPhone : public Computer {
public:
    SmartPhone(int id, string sNum, string powSource, int numCores, int memSize, string carrier, bool memCard);

    string getCarrier();
    bool hasMemoryCard();

    void setCarrier(string carrierName);
    void setMemoryCard(bool containsMemoryCard);
    void print();
private:
    string carrier;
    bool memCard;

};


#endif //ELECTRONIC_PHONE_H