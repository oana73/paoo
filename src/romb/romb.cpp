#include "romb.h"
#include <iostream>
#include <cstring> 

using namespace Geometrie; 
Romb::Romb() {
    culoare = nullptr;
    latura=0;
    id=0;
}

Romb::Romb(const char* culoare,int id, int latura){
    this->id=id;
    this->latura = latura;
    this->culoare = new char[strlen(culoare) + 1];
    strcpy(this->culoare, culoare);
}

Romb::~Romb() {
    std::cout<<"Destructor romb"<<std::endl;
    delete[] culoare;
}

int Romb::perimetru() const {
    return 4*latura;
}

void Romb::afiseaza() const{
    std::cout<<"Rombul " << id << " are latura " << latura  << " si culoarea " << culoare << std::endl;
}
    
Romb& Romb::operator=(const Romb &copy){
    if(this != &copy){
    	this->id = copy.id;
        this->latura = copy.latura;

        delete[] this -> culoare;
        this->culoare = new char[strlen(copy.culoare) + 1];
        strcpy(this->culoare, copy.culoare);

    }
    return *this;
}

Romb& Romb::operator=(const Romb &&move){
 if(this != &move){
        this->id = move.id;
        this->latura = move.latura;

        delete[] this -> culoare;
        this->culoare = new char[strlen(move.culoare) + 1];
        strcpy(this->culoare, move.culoare);

    }
    return *this;
}

Romb::Romb(const Romb &copy) {
    std::cout<<"Copy constructor"<<std::endl;
    this->id=copy.id;
    this->latura = copy.latura;
    this->culoare = new char[strlen(copy.culoare) + 1];
    strcpy(this->culoare, copy.culoare);
    
}

Romb::Romb(Romb &&move) {
    std::cout<<"Move constructor"<<std::endl;
    this->id = move.id;
    this->latura = move.latura;
    this->culoare = new char[strlen(move.culoare) + 1];
    strcpy(this->culoare, move.culoare);

    move.id=0;
    move.latura = 0;
    strcpy(move.culoare, " ");
}

void Romb::SetCuloare(const char* culoare){
    delete[] this->culoare;
    this->culoare = new char[strlen(culoare) + 1];
    strcpy(this->culoare, culoare);
    }
   
Triunghi::Triunghi(int id, int l1, int l2,int l3, const char* clasificare){
    this->id = id;
    this->l1 = l1;
    this->l2 = l2;
    this->l3 = l3;
    this->clasificare = new char[strlen(clasificare) + 1];
    strcpy(this->clasificare, clasificare);
}
Triunghi::~Triunghi() {
    std::cout<<"Destructor triunghi"<< std::endl;
    delete[] clasificare;
}
void Triunghi::afiseaza() const{
    std::cout<<"Triunghiul "<< id <<" are laturile egale cu "<< l1 << ", " << l2 << ", "<< l3 << " si este de tip " << clasificare << std::endl;
}
int Triunghi::perimetru() const{
    return l1+l2+l3;
}

Romb3D::Romb3D(const char* culoare,int id, int latura,int d1, int d2) : Romb(culoare, id, latura),d1(d1), d2(d2){};

 
void Romb3D::afiseaza() const{
    std::cout<<"Rombul "<< id << "are latura" << latura <<" si d1 egala cu " << d1 <<" respectiv d2 " << d2 << std::endl;
    
}

void Romb3D::SetCuloare(const char* culoare){
    delete[] this->culoare;
    this->culoare = new char[strlen(culoare) + 1];
    strcpy(this->culoare, culoare);
}

int Romb3D::volum() {
return (d1*d2*latura)/2;
}


