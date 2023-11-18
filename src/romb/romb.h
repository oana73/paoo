#pragma once
namespace Geometrie{
class Figura{
    public:
    virtual void afiseaza() const = 0;
    virtual int perimetru() const = 0;
    };
}

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
        Romb& operator=(const Romb &&move);
        Romb();
        void SetCuloare(const char* culoare);
	void afiseaza() const override;
        int perimetru() const override;
};
}

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
namespace Geometrie{
 class Romb3D : public Romb{
 	private: int d1;
 		 int d2;
 	
 	public: 
 	Romb3D(const char* culoare,int id, int latura,int d1, int d2);
 	void afiseaza() const override;
 	void SetCuloare(const char* culoare);
 	int volum();
 };
 }
