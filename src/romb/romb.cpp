#include "romb.h"
#include <iostream>
#include <cstring>
Romb::Romb() {
    latura = 0;
    culoare = nullptr;
}

Romb::Romb(int latura, const char* culoare) {
    this->latura = latura;
    this->culoare = new char[strlen(culoare) + 1];
    strcpy(this->culoare, culoare);
}

Romb::~Romb() {
    std::cout<<"Destructor executed!"<<std::endl;
    delete[] culoare;
}
int Romb::perimetru() const {
    return 4*latura;
}

void Romb::afiseaza() const{
    std::cout<<"Rombul are latura " << latura<< " si culoarea" <<culoare << std::endl;}
    
Romb& Romb::operator=(const Romb &copy){
    if(this != &copy){
        this->latura = copy.latura;

        delete[] this -> culoare;
        this->culoare = new char[strlen(copy.culoare) + 1];
        strcpy(this->culoare, copy.culoare);

    }
    return *this;
}

Romb& Romb::operator=(const Romb &&move){
 if(this != &move){
        this->latura = move.latura;

        delete[] this -> culoare;
        this->culoare = new char[strlen(move.culoare) + 1];
        strcpy(this->culoare, move.culoare);

    }
    return *this;
}



Romb::Romb(const Romb &copy) {
    std::cout<<"Copy constructor executed!"<<std::endl;
    this->latura = copy.latura;
    this->culoare = new char[strlen(copy.culoare) + 1];
    strcpy(this->culoare, copy.culoare);
    
}

Romb::Romb(Romb &&move) {
    std::cout<<"Move constructor executed!"<<std::endl;
    this->latura = move.latura;
    this->culoare = new char[strlen(move.culoare) + 1];
    strcpy(this->culoare, move.culoare);

    move.latura = 0;
    strcpy(move.culoare, " ");
}

void Romb::SetCuloare(const char* culoare){
    delete[] this->culoare;
    this->culoare = new char[strlen(culoare) + 1];
    strcpy(this->culoare, culoare);
    }
    
Triunghi::Triunghi(int l1, int l2,int l3, const char* clasificare){
    this -> l1=l1;
    this->l2=l2;
    this->l3=l3;
    this->clasificare = new char[strlen(clasificare) + 1];
    strcpy(this->clasificare, clasificare);
}
Triunghi::~Triunghi() {
    std::cout<<"Destructor executed!"<<std::endl;
    delete[] clasificare;
}
void Triunghi::afiseaza() const{
    std::cout<<"Triunghiul are laturile egale cu "<< l1 << l2 << l3 << "si este de tip"<<clasificare<<std::endl;
}
int Triunghi::perimetru() const{
    return l1+l2+l3;
}

