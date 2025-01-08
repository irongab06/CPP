#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout<< "\n---------------------Constructor------------------\n"<<std::endl;
	
	int	i = 0;
	Animal	*Animal[8];
	while (i < 8)
	{
		if (i % 2 == 0)
		{
			Animal[i] = new Dog;
		}
		else
			Animal[i] = new Cat;
		i++;
	}

	std::cout<< "\n---------------------Destructor-------------------\n" <<std::endl;
	
	i = 0;
	while (i < 8)
	{
		delete Animal[i];
		i++;
	}

	std::cout<< "\n---------------------Deep-Copy-------------------\n" <<std::endl;

	Dog *dog = new Dog();
	Dog *dog2 = new Dog(*dog);
	delete dog;
	dog2->makeSound();
	delete dog2;

	std::cout << "" << std::endl;

	Cat *cat = new Cat();
	Cat *cat2 = new Cat(*cat);
	delete cat;
	cat2->makeSound();
	delete cat2;
	return (0);
}
