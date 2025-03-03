#include "Animal.h"

Animal::Animal(std::string_view name, int age, double weight)
{
	this->name = name;
	this->age = age;
	this->weight = weight;
}

Animal::Animal(const Animal& other)
{
	this->name = other.name;
	this->age = other.age;
	this->weight = other.weight;
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
