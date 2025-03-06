#include "Cat.h"

Cat::Cat(std::string_view name, int age, double weight, std::string_view voice, bool bold, bool roundEars) : Animal(name, age, weight, voice)
{
	this->bold = bold;
	this->roundEars = roundEars;
}

bool Cat::GetBold()
{
	return bold;
}

bool Cat::GetRoundEars()
{
	return roundEars;
}

void Cat::Meow()
{
	std::cout << "\nÌÿó! ;3" << std::endl;
}

void Cat::Scrab()
{
	std::cout << "\nØêğÿá-øêğÿá!! >:3" << std::endl;
}

void Cat::Poop()
{
	std::cout << "\nÏóê-ñğåíüê >.<" << std::endl;
}

void Cat::ShowInfo()
{
	std::cout << std::format("\nÌÿó!!\nÊëè÷êà: {}\nÂîçğàñò: {}\nÂåñ: {}\nËûñûé: {}\nÊğóãëûå óøè: {}\n", GetName(), GetAge(), GetWeight(), GetBold(), GetRoundEars());
}
