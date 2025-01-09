#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4, i++)
	{
		_item[i] = NULL;
	}
}

Character::~Character()
{
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