
#ifndef WOLF_HPP
#define WOLF_HPP

# include <iostream>
# include <string>

# include "Victim.hpp" 

class Wolf : public Victim
{
	public:
		Wolf();
		Wolf(std::string name);
		Wolf(Wolf const& copy);
		virtual ~Wolf();
		Wolf& operator=(Wolf const& copy);

		virtual void getPolymorphed(void) const;


	private:


};

#endif
