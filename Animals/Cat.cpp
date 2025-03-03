#include "Cat.h"

Cat::Cat(std::string_view name, int age, double weight, bool bold, bool roundEars) : Animal(name, age, weight)
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
	std::cout << "\n���! ;3" << std::endl;
}

void Cat::Scrab()
{
	std::cout << "\n�����-�����!! >:3" << std::endl;
}

void Cat::Poop()
{
	std::cout << "\n���-������ >.<" << std::endl;
}

void Cat::ShowInfo()
{
	std::cout << std::format("\n���!!\n������: {}\n�������: {}\n���: {}\n�����: {}\n������� ���: {}\n", GetName(), GetAge(), GetWeight(), GetBold(), GetRoundEars());
}
