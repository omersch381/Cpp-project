#ifndef __ADDRESS_H
#define __ADDRESS_H
#include <iostream>
using namespace std;
class Address
{
private:
	char* street;
	int number;
	char* city;
public:
	Address(const char* street, int number, const char* city);
	Address(Address& otheradress);
	Address(Address&& other);
	~Address();
	friend ostream& operator<<(ostream& os, const Address& add);
	

	
};
#endif