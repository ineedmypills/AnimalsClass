#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "Zoo.h"


int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Zoo zoo;

	Cat cat("����", 19, 72, "���!!", false, false);
	Dog dog("����", 5, 55, "���!!!", true, 10);

	zoo.AddAnimal(std::make_unique<Dog>(dog));
	zoo.AddAnimal(std::make_unique<Cat>(cat));

	zoo.AllVoice();
}
