#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "Zoo.h"


int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	Cat cat("����", 19, 72, false, false);
	cat.ShowInfo();

	Dog dog("����", 5, 55, true, 10);
	dog.ShowInfo();

	Zoo{ cat, dog };
}