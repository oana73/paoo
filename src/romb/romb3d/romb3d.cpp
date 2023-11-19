#include "romb3d.h"
#include <iostream>
#include <cstring> 

using namespace Geometrie; 

Romb3D::Romb3D(const char* culoare,int id, int latura,int d1, int d2) : Romb(culoare, id, latura),d1(d1), d2(d2){};

Romb3D::~Romb3D() {
    if(this->culoare){
    	std::cout<<"Destructorul rombului 3d "<< this->id<< std::endl;
    }else{
    	std::cout<<"Romb 3d sters deja"<<std::endl;}
 }
void Romb3D::afiseaza() const{
    std::cout<<"Rombul "<< id << " are latura " << latura <<" si d1 egala cu " << d1 <<" respectiv d2 " << d2 << std::endl;
    
}

void Romb3D::SetCuloare(const char* culoare){
    delete[] this->culoare;
    this->culoare = new char[strlen(culoare) + 1];
    strcpy(this->culoare, culoare);
}

int Romb3D::volum() {
return (d1*d2*latura)/2;
}

