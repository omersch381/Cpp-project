#ifndef __REPTILE_H
#define __REPTILE_H
#include "Animal.h"
class Reptile :public Animal
{
private:
	float temp =0;
public:
	Reptile(int sn, const char* nme, float h, float w) : Animal(sn, nme, h, w) {}
	~Reptile();
	void setTemp(float tem) { temp = tem; }
	float getTemp() const { return temp; }
};
#endif
