
#ifndef VICTIM_HPP
#define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{
	public:
		Victim();
		Victim(Victim const& copy);
		~Victim();
		Victim& operator=(Victim const& copy);

	private:


};

#endif
