
# include "Squad.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Squad::Squad() : _unitNbr(0)
{
	_lst = new squadList;
	_lst->_unit = 0;
	_lst->_next = 0;
}

// COPY
Squad::Squad(Squad const& copy)
{
	_lst = copySquad(copy._lst);
}

squadList *Squad::copySquad(squadList *copy)
{
	squadList *_new;

	_new = new squadList;
	if (copy && copy->_unit)
	{
		_new->_unit = copy->_unit->clone();
		_new->_next = Squad::copySquad(copy->_next);
	}
	else
	{
		_new->_unit = 0;
		_new->_next = 0;
	}
	return (_new);
}

/*
** DESTRUCTOR
*/

Squad::~Squad()
{
	squadList	*iter;

	while (_lst != nullptr)
	{
		delete _lst->_unit;
		iter = _lst;
		_lst = _lst->_next;
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
	while (_lst != nullptr)
	{
		delete _lst->_unit;
		_lst = _lst->_next;
	}
	_lst = new squadList;
	_lst->_unit = nullptr;
	_lst->_next = nullptr;
	squadList *iter;
	iter = copy._lst;
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

	iter = _lst;
	while (i < n && iter && _lst->_next)
	{
		iter = iter->_next;
		i++;
	}
	if (!iter)
		return (nullptr);
	return (iter->_unit);
}

squadList *Squad::getLast(squadList *_lst)
{
	squadList *iter;

	iter = _lst;
	while (iter && iter->_next)
	{
		iter = iter->_next;
	}
	return (iter);
}

int Squad::onlyOnce(squadList *_lst, ISpaceMarine *aMarine)
{
	squadList *iter;

	iter = _lst;
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

	if (aMarine && Squad::onlyOnce(this->_lst, aMarine))
	{
		iter = Squad::getLast(this->_lst);
		if (iter && iter->_unit)
		{
			iter->_next = new squadList;
			iter = iter->_next;
			iter->_unit = aMarine;
			iter->_next = nullptr;
		}
		else
		{
			_lst->_unit = aMarine;
			_lst->_next = nullptr;
		}
		_unitNbr++;
	}
	return (_unitNbr);
}