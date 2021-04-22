
#ifndef SQUAD_HPP
#define SQUAD_HPP

# include <iostream>
# include <string>

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

typedef struct squadList
{
	ISpaceMarine 	*m_unit;
	squadList		*m_next;
} 				squadList;

class Squad : public ISquad
{
	public:
		Squad();
		Squad(Squad const& copy);
		squadList *copySquad(squadList *copy);
		~Squad();
		Squad& operator=(Squad const& copy);

		int getCount() const;
		ISpaceMarine* getUnit(int) const;
		int push(ISpaceMarine*);

		int onlyOnce(ISpaceMarine *a_marine);
		squadList *getLast();

	private:
		int 		m_unitNbr;
		squadList 	*m_squadList;

};

#endif
