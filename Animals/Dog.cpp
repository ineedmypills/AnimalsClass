#include "Dog.h"

Dog::Dog(std::string_view name, int age, double weight, std::string_view voice, bool tail, double dogRage) : Animal(name, age, weight, voice)
{
	this->tail = tail;
	this->dogRage = dogRage;
}

bool Dog::GetTail()
{
	return tail;
}

double Dog::GetDogRage()
{
	return dogRage;
}

void Dog::Bark()
{
	std::cout << "\n���-���!!" << std::endl;
}

void Dog::Bite()
{
	std::cout << "\n����!!" << std::endl;
}

void Dog::Poop()
{
	std::cout << "\n������" << std::endl;
}

void Dog::ShowInfo()
{
	std::cout << std::format("\n���!!\n������: {}\n�������: {}\n���: {}\n�����: {}\n������� ������� ������: {}\n", GetName(), GetAge(), GetWeight(), GetTail(), GetDogRage());
}
