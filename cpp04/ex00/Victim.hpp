
#ifndef VICTIM_HPP
#define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{
	public:
		Victim();
		Victim(std::string name);
		Victim(Victim const& copy);
		~Victim();
		Victim& operator=(Victim const& copy);

		virtual void getPolymorphed(void) const;
		void intro(void) const;

	protected:
		std::string _name;
		Victim();

};

std::ostream & operator<<(std::ostream & o, Victim const & copy);

#endif
