#pragma warning(disable: 4996)
#ifndef __BIRD_H
#define __BIRD_H
#include "Animal.h"
#include <stdio.h>
#include <string.h>
class Bird : public Animal
{
private:
	char* colorOfFeathers;
	float sizeOfbeak;

public:
	Bird(int sn, const char* nme, float h, float w,const char* cof, float sob) : Animal(sn, nme, h, w)
	{
		sizeOfbeak = sob;
		colorOfFeathers = new char[strlen(cof) + 1];
		strcpy(colorOfFeathers, cof);
	}
	~Bird();
	char* getColorOfFeathers() const { return colorOfFeathers; }
	float getSizeOfBeak() const { return sizeOfbeak; }


};
#endif

