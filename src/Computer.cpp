#include "Computer.h"

Computer::Computer(int id, string serialNum, string powSource, int numCores, int memSize) :
        Electronic(id, serialNum, powSource){
    this->numCores = numCores;
    this->memGB_Size = memSize;
}

int Computer::getNumCores() {
    return this->numCores;
}

int Computer::getMemGB_Size() {
    return this->memGB_Size;
}

void Computer::setNumCores(int numCores) {
    this->numCores = numCores;
}

void Computer::setMemGB_Size(int size) {
    this->memGB_Size = size;
}

//TODO finish this class