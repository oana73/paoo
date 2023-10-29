#pragma once

class Romb {
    private: int latura;
             char* culoare;
    public: 
        Romb(int latura, const char* culoare);
        Romb(const Romb& copy);
        Romb(Romb&& move);
        ~Romb();

        int perimetru();
        char* getCuloare();
       
};
