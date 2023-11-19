#include "triunghi.h"
#include <iostream>
#include <cstring> 

using namespace Geometrie; 

Triunghi::Triunghi(int id, int l1, int l2,int l3, const char* clasificare){
    this->id = id;
    this->l1 = l1;
    this->l2 = l2;
    this->l3 = l3;
    this->clasificare = new char[strlen(clasificare) + 1];
    strcpy(this->clasificare, clasificare);
}
Triunghi::~Triunghi() {
    std::cout<<"Destructor triunghi "<< this->id << std::endl;
    delete[] clasificare;
}
void Triunghi::afiseaza() const{
    std::cout<<"Triunghiul "<< id <<" are laturile egale cu "<< l1 << ", " << l2 << ", "<< l3 << " si este de tip " << clasificare << std::endl;
}
int Triunghi::perimetru() const{
    return l1+l2+l3;
}

