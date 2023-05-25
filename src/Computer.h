#ifndef ELECTRONIC_COMPUTER_H
#define ELECTRONIC_COMPUTER_H

#include "Electronic.h"

class Computer : public Electronic
{
public:
    Computer(int id, string serialNum, string powSource, int numCores, int memSize);

    int getNumCores();
    int getMemGB_Size();

    void setNumCores(int numCores);
    void setMemGB_Size(int size);
    void print();

private:
    int numCores;
    int memGB_Size;
};

#endif // ELECTRONIC_COMPUTER_H