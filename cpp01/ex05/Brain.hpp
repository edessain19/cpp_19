
#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	public:
		Brain();
		~Brain();

		Brain& operator=(Brain const& copy);
		Brain *identify()
	private:
		std::string	m_lobe;
		std::string	m_cortex;

};

#endif
