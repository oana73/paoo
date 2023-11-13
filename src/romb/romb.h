#pragma once
class Figura{
    public:
    virtual void afiseaza() const = 0;
    virtual int perimetru() const = 0;
    };
class Romb  : public Figura{
    private: int latura;
             char* culoare;
    public: 
        Romb(int latura, const char* culoare);
        Romb(const Romb& copy);
        Romb(Romb&& move);
        ~Romb();
        Romb& operator=(const Romb &copy);
        Romb& operator=(const Romb &&move);
        Romb();
        void SetCuloare(const char* culoare);
	void afiseaza() const override;
        int perimetru() const override;
};
class Triunghi : public Figura{
     private: int l1;
     	      int l2;
     	      int l3;
     	      char* clasificare;
     public:
        Triunghi(int l1, int l2, int l3, const char* clasificare);
        ~Triunghi();
        void afiseaza() const override;
        int perimetru() const override;
        };
