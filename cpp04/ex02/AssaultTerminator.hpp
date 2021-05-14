
#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

# include <iostream>
# include <string>

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator();
		AssaultTerminator(AssaultTerminator const& copy);
		virtual ~AssaultTerminator();
		AssaultTerminator& operator=(AssaultTerminator const& copy);

		virtual ISpaceMarine* clone() const;
		virtual void battleCry() const;
		virtual void rangedAttack() const;
		virtual void meleeAttack() const;
	private:


};

#endif
