
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

		void			introduction(void) const;
		virtual void	getPolymorphed(void) const;
	
	protected:
		std::string		_name;

};

std::ostream& operator<<( std::ostream &flux, Victim const& copy);

#endif
