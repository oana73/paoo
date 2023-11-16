#pragma once
class Figura{
    public:
    virtual void afiseaza() const = 0;
    virtual int perimetru() const = 0;
    };
class Romb  : public Figura{
    protected: int latura;
               char* culoare;
    public: 
        Romb(const char* culoare, int latura);
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
        
 class Romb3D : public Romb{
 	private: int d1;
 		 int d2;
 	
 	public: 
 	Romb3D(const char* culoare,int latura,int d1, int d2);
 	void afiseaza() const override;
 	void SetCuloare(const char* culoare);
 	int volum();
 };
