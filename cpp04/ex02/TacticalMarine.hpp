
#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

# include <iostream>
# include <string>

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine();
		TacticalMarine(TacticalMarine const& copy);
		virtual ~TacticalMarine();
		TacticalMarine& operator=(TacticalMarine const& copy);

		virtual ISpaceMarine *clone() const;
		virtual void battleCry() const;
		virtual void rangedAttack() const;
		virtual void meleeAttack() const;

	private:


};

#endif
