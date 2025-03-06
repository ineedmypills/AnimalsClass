#ifndef _ANIMAL_H_
#define _ANIMAL_H_
#include <iostream>
#include <Windows.h>
#include <string>
#include <string_view>
#include <format>
#include <vector>
#include <algorithm>
#include <memory>

class Animal
{
public:
	Animal(std::string_view name, int age, double weight, std::string_view voice);
	Animal(const Animal& other);

	std::string_view GetName();
	int GetAge();
	double GetWeight();
	void Voice();


private:
	std::string_view name{"None"};
	std::string_view voice{ "Silence" };
	int age{ 0 };
	double weight{ 0 };
};


#endif // !_ANIMAL_H_