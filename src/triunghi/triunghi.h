#pragma once
#include "figura.h"
namespace Geometrie{
class Triunghi : public Figura{
     private: int id;
     	      int l1;
     	      int l2;
     	      int l3;
     	      char* clasificare;
     public:
        Triunghi(int id, int l1, int l2, int l3, const char* clasificare);
        ~Triunghi();
        void afiseaza() const override;
        int perimetru() const override;
        };
}
