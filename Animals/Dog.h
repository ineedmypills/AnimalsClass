#ifndef _DOG_H_
#define _DOG_H_

#include "Animal.h"
class Dog : public Animal
{
public:
	Dog(std::string_view name, int age, double weight, std::string_view voice, bool tail, double dogRage);

	bool GetTail();
	double GetDogRage();

	void Bark();
	void Bite();
	void Poop();

	void ShowInfo();

private:
	bool tail{ false };
	double dogRage{ false };
};

#endif // !_DOG_H_