
# include "MateriaSource.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_materia[i] = 0;	
}

// COPY
MateriaSource::MateriaSource(MateriaSource const& copy)
{
	for (int i = 0; i < 4; i++)
		_materia[i] = 0;
	*this = copy;
}

/*
** DESTRUCTOR
*/

MateriaSource::~MateriaSource()
{
	int i;

	i = -1;
	while (++i < 4 && _materia[i])
		delete _materia[i];
}

/*
** OPERATORS
*/

// ASSIGNATION
MateriaSource& MateriaSource::operator=(MateriaSource const& copy)
{
	int	i;

	if (this != &copy)
	{
		i = -1;
		while (++i < 4 && _materia[i])
			delete _materia[i];
		i = -1;
		while (++i < 4 && copy._materia[i])
			_materia[i] = copy._materia[i]->clone();
	}
	return (*this);
}

/*
** MEMBER FUNCTIONS
*/

void MateriaSource::learnMateria(AMateria* copy)
{
	int i = -1;

	while(++i < 4 && _materia[i])
		;
	if (i < 4 && copy)
		_materia[i] = copy->clone();
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i;

	i = -1;
	while (++i < 4 && _materia[i])
	{
		if (_materia[i]->getType() == type)
			return (_materia[i]->clone());
	}
	return (0);
}