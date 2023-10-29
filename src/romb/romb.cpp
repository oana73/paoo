#include <iostream>
#include <cstring>
#include "romb.h"

Romb::Romb(int latura, char* culoare) {
    this->latura = latura;
    this->culoare = new char[strlen(culoare) + 3];
    strcpy(this->culoare, culoare);
}

Romb::Romb() {
    cout<<"Destructor executed!"<<endl;
    delete[] culoare;
}
int Romb::perimetru() {
    return 4*latura;
}

char* Romb::getCuloare() {
    return culoare;
}

Romb::Romb(const Romb &copy) {
    cout<<"Copy constructor executed!"<<endl;
    this->latura = copy.latura;
    this->culoare = new char[strlen(copy.culoare) + 1];
    strcpy(this->culoare, culoare);
    
}

Romb::Romb(Romb &&move) {
    cout<<"Move constructor executed!"<<endl;
    this->latura = move.latura;
    this->culoare = new char[strlen(move.culoare) + 1];
    strcpy(this->culoare, move.culoare);

    move.latura = 0;
    strcpy(move.culoare, " ");
}

