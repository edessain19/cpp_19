
#ifndef ISQUAD_HPP
#define ISQUAD_HPP

# include <iostream>
# include <string>

class ISpaceMarine;

class ISquad
{
	public:
		virtual ~ISquad() {};
		virtual int getCount() const = 0;
		virtual ISpaceMarine* getUnit(int) const = 0;
		virtual int push(ISpaceMarine*) = 0;

	private:


};

#endif
