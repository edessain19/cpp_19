
#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

# include <iostream>
# include <string>

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(MateriaSource const& copy);
		MateriaSource& operator=(MateriaSource const& copy);
		virtual ~MateriaSource();
		
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
	private:


};

#endif
