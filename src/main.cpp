#include <iostream>
#include<string>
#include "romb.h"

int main() {

    //const char* culoare = "roz";
    Romb romb1(2, "roz");
    Romb romb4(4,"alb");
    //Romb romb2(romb1);//copy constructor

    std::cout << "Perimetrul rombului1 de culoare " << romb1.getCuloare() << " este: " << romb1.perimetru() << std::endl;
    std::cout << "Perimetrul rombului4 de culoare " << romb4.getCuloare() << " este: " << romb4.perimetru() << std::endl;
    
    Romb romb2 = romb1;
    romb2.SetCuloare("alb");
    std::cout << "Perimetrul rombului2 de culoare " << romb2.getCuloare() << " este: " << romb2.perimetru() << std::endl;
   
    Romb romb3(std::move(romb1)); //move constructor
    std::cout << "Perimetrul rombului1 de culoare " << romb1.getCuloare() << " este: " << romb1.perimetru() << std::endl;
    std::cout << "Perimetrul rombului3 de culoare " << romb3.getCuloare() << " este: " << romb3.perimetru() << std::endl;
}
