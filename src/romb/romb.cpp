#include "romb.h"
#include <iostream>
#include <cstring>


Romb::Romb(int latura, const char* culoare) {
    this->latura = latura;
    this->culoare = new char[strlen(culoare) + 1];
    strcpy(this->culoare, culoare);
}

Romb::~Romb() {
    std::cout<<"Destructor executed!"<<std::endl;
    delete[] culoare;
}
int Romb::perimetru() {
    return 4*latura;
}

char* Romb::getCuloare() {
    return culoare;
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
