#ifndef _ZOO_H_
#define _ZOO_H_
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"


class Zoo
{
public:
    Zoo();

    void AddAnimal(std::unique_ptr<Animal> Animal);

    void AllVoice() const;

 
private:
    std::vector<std::unique_ptr<Animal>> Animals;
};

#endif // !_ZOO_H_