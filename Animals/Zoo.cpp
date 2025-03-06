#include "Zoo.h"

Zoo::Zoo()
{

}

void Zoo::AddAnimal(std::unique_ptr<Animal> Animal)
{
    Animals.push_back(std::move(Animal));
}

void Zoo::AllVoice() const {
    for (const auto& Animal : Animals)
    {
        Animal.get()->Voice();
    }
}
