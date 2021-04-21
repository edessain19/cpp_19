
#ifndef WOLF_HPP
#define WOLF_HPP

# include <iostream>
# include <string>

# include "Victim.hpp"

class Wolf : public Victim
{
	public:
		Wolf(std::string name);
		Wolf(Wolf const& copy);
		~Wolf();
		Wolf& operator=(Wolf const& copy);

		void getPolymorphed(void) const;

	private:


};

#endif
