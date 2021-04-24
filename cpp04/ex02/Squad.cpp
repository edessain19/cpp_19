
# include "Squad.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Squad::Squad() : _unitNbr(0)
{
	_squadList = new squadList;
	_squadList->_unit = nullptr;
	_squadList->_next = nullptr;
}

// COPY
Squad::Squad(Squad const& copy)
{
	*this = copy;
}

/*
** DESTRUCTOR
*/

Squad::~Squad()
{
	squadList	*iter;

	while (_squadList != nullptr)
	{
		delete _squadList->_unit;
		iter = _squadList;
		_squadList = _squadList->_next;
		delete iter;
	}
}

/*
** OPERATORS
*/

// ASSIGNATION
// deepcopy means a copy on another memory address
Squad& Squad::operator=(Squad const& copy)
{
	while (_squadList != nullptr)
	{
		delete _squadList->_unit;
		_squadList = _squadList->_next;
	}
	_squadList = new squadList;
	_squadList->_unit = nullptr;
	_squadList->_next = nullptr;
	squadList *iter;
	iter = copy._squadList;
	while (iter != nullptr)
	{
		push(iter->_unit->clone());
		iter = iter->_next;
	}
	return (*this);
}

/*
** MEMBER FUNCTIONS
*/

int				Squad::getCount() const
{
	return (_unitNbr);
}

ISpaceMarine*	Squad::getUnit(int n) const
{
	int i = 0;
	squadList	*iter;

	iter = _squadList;
	while (i < n && iter && _squadList->_next)
	{
		iter = iter->_next;
		i++;
	}
	if (!iter)
		return (nullptr);
	return (iter->_unit);
}

squadList *Squad::getLast()
{
	squadList *iter;

	iter = _squadList;
	while (iter && iter->_next)
	{
		iter = iter->_next;
	}
	return (iter);
}

int Squad::onlyOnce(ISpaceMarine *aMarine)
{
	squadList *iter;

	iter = _squadList;
	if (!aMarine)
		return (0);
	while (iter)
	{
		if (iter->_unit == aMarine)
			return (0);
		iter = iter->_next;
	}
	return (1);
}

int Squad::push(ISpaceMarine* aMarine)
{
	squadList	*iter;

	if (aMarine && Squad::onlyOnce(aMarine))
	{
		iter = Squad::getLast();
		if (iter && iter->_unit)
		{
			iter->_next = new squadList;
			iter = iter->_next;
			iter->_unit = aMarine;
			iter->_next = nullptr;
		}
		else
		{
			_squadList->_unit = aMarine;
			_squadList->_next = nullptr;
		}
		_unitNbr++;
	}
	return (_unitNbr);
}