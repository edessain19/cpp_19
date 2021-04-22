
#ifndef VOLDEMORT_HPP
#define VOLDEMORT_HPP

# include <iostream>
# include <string>

#include "Enemy.hpp"

class Voldemort : public Enemy
{
	public:
		Voldemort();
		Voldemort(Voldemort const& copy);
		virtual ~Voldemort();
		Voldemort& operator=(Voldemort const& copy);

	private:


};

#endif
