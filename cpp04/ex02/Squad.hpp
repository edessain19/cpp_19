
#ifndef SQUAD_HPP
#define SQUAD_HPP

# include <iostream>
# include <string>

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

typedef struct squadList
{
	ISpaceMarine 	*_unit;
	squadList		*_next;
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

		int onlyOnce(squadList *_lst, ISpaceMarine *aMarine);
		squadList *getLast(squadList *_lst);

	private:
		int 		_unitNbr;
		squadList 	*_lst;
};

#endif
