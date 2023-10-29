#pragma once

class Romb {
    private: int latura;
             char* culoare;
    public: 
        Romb();
        Romb(int, char*);
        Romb(const Romb&);
        Romb(Romb&&);
        ~Romb();

        int perimetru();
        char* getCuloare();
       
};