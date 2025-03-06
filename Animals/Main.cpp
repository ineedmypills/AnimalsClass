#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "Zoo.h"


int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Zoo zoo;

	Cat cat("ѕаша", 19, 72, "ћя”!!", false, false);
	Dog dog("¬лад", 5, 55, "“я‘!!!", true, 10);

	zoo.AddAnimal(std::make_unique<Dog>(dog));
	zoo.AddAnimal(std::make_unique<Cat>(cat));

	zoo.AllVoice();
}
