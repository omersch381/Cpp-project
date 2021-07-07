#ifndef __PARROT_H
#define __PARROT_H
#include "Bird.h"
#include "Canfly.h"
class Parrot : public Bird , public Canfly
{
public :
	Parrot(int sn, const char* nme, float h, float w, const char* coth, float sob, int spOf) : Bird(sn, nme, h, w, coth, sob), Canfly(spOf){}
	Parrot(const Parrot& other);
	Parrot(Parrot&& other);
	~Parrot();
    void eat();
	void makeSound() const override ;
	void fly() const override;
	const Parrot& operator++();
};

#endif
