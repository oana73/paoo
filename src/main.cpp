#include <iostream>
#include<string>
#include "romb.h"

using namespace Geometrie;
int main() {

    //const char* culoare = "roz";
    Romb romb1("roz",1,2);
    Romb romb2("alb",2,4);
    //Romb romb2(romb1);//copy constructor
    romb1.afiseaza();
    romb2.afiseaza();
    
    Romb romb3 = romb1;
    Romb romb4;
    romb3.SetCuloare("verde");
    romb4 = romb3;
    romb4.afiseaza();
    
    Romb romb5 = Romb("albastru",5 ,4);
    Romb romb6;
    romb6= Romb("fhg",5 ,1);
    romb6.afiseaza();
    romb6.perimetru();
    
    Triunghi t1(1,3,3,3,"echilateral");
    t1.afiseaza();
    t1.perimetru();
    
    Romb3D romb3D("galben",1,4,3,2);
    romb3D.volum();
    romb3D.afiseaza();
    
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
