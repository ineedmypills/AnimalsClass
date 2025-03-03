#ifndef _CAT_H_
#define _CAT_H_

#include "Animal.h"
class Cat : public Animal
{
public:
	Cat(std::string_view name, int age, double weight, bool bold, bool roundEars);

	bool GetBold();
	bool GetRoundEars();

	void Meow();
	void Scrab();
	void Poop();

	void ShowInfo();

private:
	bool bold{ false };
	bool roundEars{ false };
};

#endif // !_CAT_H_