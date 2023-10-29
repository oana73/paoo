#include <iostream>
#include "romb.h"

int main() {

    Romb romb1(2,"roz");
    Romb romb29(romb1);//copy constructor

    std::cout << "Perimetrul rombului1 de culoare " << romb1.getCuloare() << " este: " << romb1.perimetru() << std::endl;
    std::cout << "Perimetrul rombului2 de culoare " << romb2.getCuloare() << " este: " << romb2.perimetru() << std::endl;
   
    Romb romb3(std::move(romb1)); //move constructor
    std::cout << "Perimetrul rombului1 de culoare " << romb1.getCuloare() << " este: " << romb1.perimetru() << std::endl;
    std::cout << "Perimetrul rombului3 de culoare " << romb3.getCuloare() << " este: " << romb3.perimetru() << std::endl;
}