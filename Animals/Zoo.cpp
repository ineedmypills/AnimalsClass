#include "Zoo.h"

Zoo::Zoo(std::initializer_list < Animal > list)
{
	Animals.resize(list.size());
		for (size_t i = 0; i < list.size(); i++)
		{
			std::copy(list.begin(), list.end(), Animals.begin());

		}
		for (auto &i : Animals)
		{
			std::cout << i.GetName() << std::endl;
		}
}
