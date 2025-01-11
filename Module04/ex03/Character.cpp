#include "Character.hpp"

Character::Character() : _name("")
{
	for (int i = 0; i < 4; i++)
	{
		_item[i] = NULL;
	}
}

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
	{
		_item[i] = NULL;
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete this->_item[i];
}

Character::Character(Character const& copy) : ICharacter(copy)
{
	
}

Character&	Character::operator=(Character const& copy)
{
	_name = copy.getName();
	for(int i = 0; i < 4; i++)
	{
		if (_item[i] != NULL)
			delete _item[i];
		_item[i] = copy._item[i]->clone();
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!_item[i])
		{
			this->_item[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3 && _item[idx])
		this->_item[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3 && _item[idx] &&!target.getName().empty())
		this->_item[idx]->use(target);
}
