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

    	std::cout<<"Destructor rombului "<< this->id << std::endl;
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
    	std::cout<< "Copy assignment"<< std::endl;
    	this->id = copy.id;
        this->latura = copy.latura;

        delete[] this -> culoare;
        this->culoare = new char[strlen(copy.culoare) + 1];
        strcpy(this->culoare, copy.culoare);

    }
    return *this;
}

Romb& Romb::operator=(Romb &&move){
 if(this != &move){
 	std::cout<< "Move assignment"<< std::endl;
        this->id = move.id;
        this->latura = move.latura;
	this->culoare = move.culoare;
	
	move.id=0;
	move.latura=0;
	move.culoare=nullptr;

    }
    return *this;
}

Romb::Romb(const Romb &copy) {
    std::cout<<"Copy constructor"<<std::endl;
    this->id = copy.id;
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
    move.culoare = nullptr;
}

void Romb::SetCuloare(const char* culoare){
    delete[] this->culoare;
    this->culoare = new char[strlen(culoare) + 1];
    strcpy(this->culoare, culoare);
    }
 
