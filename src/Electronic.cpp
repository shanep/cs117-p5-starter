#include "Electronic.h"

using namespace std;

Electronic::Electronic(int idNum, string serialNum, string powerSource) {
    this->idNum = idNum;
    this->serialNum = serialNum;
    this->powerSource = powerSource;
}

int Electronic::getId() {
    return this->idNum;
}

string Electronic::getSerialNum() {
    return this->serialNum;
}

string Electronic::getPowerSource() {
    return this->powerSource;
}

void Electronic::setID(int id) {
    this->idNum = id;
}

void Electronic::setSerialNum(string sNum) {
    this->serialNum = sNum;
}

void Electronic::setPowerSource(string pSrc) {
    this->powerSource = pSrc;
}

void Electronic::print() {
    cout << "This electronic device::" << endl;
    cout << "\tId #: \t\t" << idNum << endl;
    cout << "\tSerial #: \t" << serialNum << endl;
    cout << "\tPower Source: \t" << powerSource << endl;
}