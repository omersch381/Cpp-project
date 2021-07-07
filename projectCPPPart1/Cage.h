#ifndef __CAGE_H
#define __CAGE_H
#include "Animal.h"
class Cage
{

private:
	Animal* animals;
	int animalsCount = 0;
	char* cageType;


public:
	friend ostream& operator<< (ostream& o, const Cage& a);
	Cage(int type);
	Cage(const Cage& other);
	Cage(Cage&& other);
	~Cage()
	{

	}
	void addAnimal(Animal& animal);
	void removeAnimal(int sn);
	const Cage& operator+=(const Cage& other);
	const Cage& operator+=(const Animal& other);
	char* getType() const { return cageType;};
	


	

};
#endif

