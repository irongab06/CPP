/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:47:25 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/16 11:47:27 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	//Animal	animal = Animal();
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
