
#ifndef PEON_HPP
#define PEON_HPP

# include <iostream>
# include <string>

# include "Victim.hpp"

class Peon : public Victim
{
	public:
		Peon(std::string name);
		Peon(Peon const& copy);
		~Peon();
		Peon& operator=(Peon const& copy);

		void getPolymorphed(void) const;

	private:


};

#endif
