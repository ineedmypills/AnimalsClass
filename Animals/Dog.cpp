#include "Dog.h"

Dog::Dog(std::string_view name, int age, double weight, bool tail, double dogRage) : Animal(name, age, weight)
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
	std::cout << "\nÒßÔ-ÒßÔ!!" << std::endl;
}

void Dog::Bite()
{
	std::cout << "\nÊÓÑÜ!!" << std::endl;
}

void Dog::Poop()
{
	std::cout << "\nÍÀÑÐÀË" << std::endl;
}

void Dog::ShowInfo()
{
	std::cout << std::format("\nÃÀÂ!!\nÊëè÷êà: {}\nÂîçðàñò: {}\nÂåñ: {}\nÕâîñò: {}\nÓðîâåíü ñîáà÷åé çëîñòè: {}\n", GetName(), GetAge(), GetWeight(), GetTail(), GetDogRage());
}
