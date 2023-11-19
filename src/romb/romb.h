#pragma once
#include "figura.h"
namespace Geometrie{
class Romb  : public Figura{
    protected: int latura;
               int id;
               char* culoare;
    public: 
        Romb(const char* culoare,int id, int latura);
        Romb(const Romb& copy);
        Romb(Romb&& move);
        ~Romb();
        Romb& operator=(const Romb &copy);
        Romb& operator=(Romb &&move);
        Romb();
        void SetCuloare(const char* culoare);
	void afiseaza() const override;
        int perimetru() const override;
};
}

