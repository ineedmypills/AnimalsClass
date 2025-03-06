#include "Animal.h"

Animal::Animal(std::string_view name, int age, double weight, std::string_view voice)
{
	this->name = name;
	this->age = age;
	this->weight = weight;
	this->voice = voice;
}

Animal::Animal(const Animal& other)
{
	this->name = other.name;
	this->age = other.age;
	this->weight = other.weight;
	this->voice = other.voice;
}

std::string_view Animal::GetName()
{
	return name;
}

int Animal::GetAge()
{
	return age;
}

double Animal::GetWeight()
{
	return weight;
}

void Animal::Voice()
{
	std::cout << std::endl << voice << std::endl;
}
