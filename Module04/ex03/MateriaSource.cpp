#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->Source[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->Source[i])
			delete this->Source[i];
	}
}

MateriaSource::MateriaSource(MateriaSource const& copy)
{
	*this = copy;
}

MateriaSource&	MateriaSource::operator=(MateriaSource const& copy)
{
	if (this == &copy)
		return (*this);
	for (int i = 0; i < 4; i++)
	{
		if (this->Source[i])
			delete this->Source[i];
		this->Source[i] = (copy.Source[i]) ? copy.Source[i]->clone() : NULL;
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* materia)
{
	if (!materia)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!Source[i])
		{
			this->Source[i] = materia;
			return ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->Source[i] && this->Source[i]->getType() == type)
			return (this->Source[i]->clone());
	}
	return (0);
}