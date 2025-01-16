/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacavali <gacavali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:51:43 by gacavali          #+#    #+#             */
/*   Updated: 2025/01/16 11:53:41 by gacavali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

int main()
{
	std::cout << "--------------------Test Sujet-------------------\n"<< std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	std::cout<< "\n----------------------Other Test-----------------\n"<< std::endl;

	std::cout << "Create character marine and Gabi\n"<< std::endl;
	IMateriaSource* materia = new MateriaSource();
	materia->learnMateria(new Ice());
	materia->learnMateria(new Ice());
	materia->learnMateria(new Ice());
	materia->learnMateria(new Cure());
	Character* marine = new Character("Marine");
	Character* Gabi = new Character("Gabi");
	AMateria* tmp1;
	std::cout << "test ADD 5 Item {ice, ice, ice, cure, cure}\n" << std::endl;
	tmp1 = materia->createMateria("ice");
	marine->equip(tmp1);

	tmp1 = materia->createMateria("ice");
	marine->equip(tmp1);

	tmp1 = materia->createMateria("ice");
	marine->equip(tmp1);

	tmp1 = materia->createMateria("cure");
	marine->equip(tmp1);

	tmp1 = materia->createMateria("cure");
	marine->equip(tmp1);

	marine->use(0, *Gabi);
	marine->use(1, *Gabi);
	marine->use(2, *Gabi);
	marine->use(3, *Gabi);
	marine->use(4, *Gabi);


	AMateria* tmp2;

	tmp2 = marine->getMateria(0);
	marine->unequip(0);
	delete tmp2;

	tmp2 = marine->getMateria(1);
	marine->unequip(1);
	delete tmp2;

	tmp2 = marine->getMateria(2);
	marine->unequip(2);
	delete tmp2;

	tmp2 = marine->getMateria(3);
	marine->unequip(3);
	delete tmp2;

	delete marine;
	delete Gabi;
	delete materia;
	return 0;
}
