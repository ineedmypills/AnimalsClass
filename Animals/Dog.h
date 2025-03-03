#pragma once
#include "Animal.h"
class Dog : public Animal
{
public:
	Dog(std::string_view name, int age, double weight, bool tail, double dogRage);

	bool GetTail();
	bool GetDogRage();

	void Bark();
	void Bite();
	void Poop();

	void ShowInfo();

private:
	bool tail{ false };
	double dogRage{ false };
};

