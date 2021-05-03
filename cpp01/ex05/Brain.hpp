
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
		const Brain *identify() const;
	private:
		std::string	m_lobe;
		std::string	m_cortex;

};

#endif
