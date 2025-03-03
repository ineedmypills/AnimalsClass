#ifndef _ZOO_H_
#define _ZOO_H_
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"


class Zoo
{
public:
	Zoo(std::initializer_list < Animal > list);
private:
	std::vector <Animal> Animals;
};

#endif // !_ZOO_H_