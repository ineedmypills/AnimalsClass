#ifndef _ANIMAL_H_
#define _ANIMAL_H_
#include <iostream>
#include <Windows.h>
#include <string>
#include <string_view>
#include <format>

class Animal
{
public:
	Animal(std::string_view name, int age, double weight);
	Animal(const Animal& other);

private:
	std::string_view name{"None"};
	int age{ 0 };
	double weight{ 0 };
};


#endif // !_ANIMAL_H_