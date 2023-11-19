#pragma once
#include "romb.h"
namespace Geometrie{
 class Romb3D : public Romb{
 	private: int d1;
 		 int d2;
 	
 	public: 
 	Romb3D(const char* culoare,int id, int latura,int d1, int d2);
 	~Romb3D();
 	void afiseaza() const override;
 	void SetCuloare(const char* culoare);
 	int volum();
 };
 }

