#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{

const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();

std::cout << "\n----------------Test Sujet------------------\n"<< std::endl;
std::cout << j->getType() << " " << std::endl;
j->makeSound();
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
meta->makeSound();

std::cout << "\n----------------Test WrongCat------------------\n"<< std::endl;
const WrongAnimal* a = new WrongCat();
std::cout << a->getType() << " " << std::endl;
a->makeSound();

delete i;
delete j;
delete meta;
delete a;
return (0);
}
