#include <iostream>
#include<string>
#include "romb.h"

int main() {

    //const char* culoare = "roz";
    Romb romb1(2,"roz");
    Romb romb4(4,"alb");
    //Romb romb2(romb1);//copy constructor
    romb1.afiseaza();
    romb4.afiseaza();
    Romb romb2 = romb1;
    Romb r3;
    r3 = romb2;
    romb2.SetCuloare("alb");
    r3.afiseaza();
    Romb r4 = Romb(4,"rlk");
    Romb r5;
    r5= Romb(1, "fhg");
    r5.afiseaza();
    r5.perimetru();
    
    Triunghi t1(3,3,3,"echilateral");
    t1.afiseaza();
    t1.perimetru();
    }
/*    std::cout << "Perimetrul rombului1 de culoare " << romb1.getCuloare() << " este: " << romb1.perimetru() << std::endl;
    std::cout << "Perimetrul rombului4 de culoare " << romb4.getCuloare() << " este: " << romb4.perimetru() << std::endl;
    
    Romb romb2 = romb1;
    Romb r3;
    r3 = romb2;
    //romb2.SetCuloare("alb");
    std::cout << "Perimetrul rombului2 de culoare " << r3.getCuloare() << " este: " << r3.perimetru() << std::endl;
   
   Romb r4 = Romb(4,"rlk");
   Romb r5;
   r5= Romb(1, "fhg");
    // Romb romb3(std::move(romb1)); //move constructor
    std::cout << "Perimetrul rombului1 de culoare " << r5.getCuloare() << " este: " << r5.perimetru() << std::endl;
    // std::cout << "Perimetrul rombului3 de culoare " << romb3.getCuloare() << " este: " << romb3.perimetru() << std::endl;
}*/
