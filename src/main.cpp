#include "romb3d.h"
#include "triunghi.h"
#include <iostream>
#include <string>

using namespace Geometrie;
int main() {

    Romb romb1("roz",1,2);
    Romb romb2("alb",2,4);
    romb1.afiseaza();
    romb2.afiseaza();
    std::cout<<std::endl;
    
    Romb copieRomb1 = romb1;//copy constructor 
    copieRomb1.SetCuloare("verde"); 
    copieRomb1.afiseaza();
    std::cout<<std::endl;
    
    
    Romb romb3("portocaliu",3,5);
    Romb romb4;
    romb4 = romb3;//copy assignment
    romb4.afiseaza();
    std::cout<<std::endl;
    
    
    Romb romb5 = Romb("albastru",5 ,4);//move constructor
    Romb moveRomb5(std::move(romb5));
    moveRomb5.afiseaza();
    std::cout<<std::endl;
    
    
    Romb romb6;
    romb6 = Romb("roz",6 ,1);//move assigment
    romb6.afiseaza();
    romb6.perimetru();
    std::cout<<std::endl;
    
    
    Triunghi t1(1,3,3,3,"echilateral");
    t1.afiseaza();
    std::cout << t1.perimetru() << std::endl;
    std::cout << std::endl;
    
    
    Romb3D romb3D("galben",1,4,3,2);
    romb3D.afiseaza();
    std::cout << romb3D.volum() << std::endl;
    std::cout<<std::endl;
    
    
    }

