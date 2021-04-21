
#ifndef ENEMY_HPP
#define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
	public:
		Enemy();
		Enemy(Enemy const& copy);
		virtual ~Enemy();
		Enemy& operator=(Enemy const& copy);

		int	getHP() const;
		virtual void takeDamage(int);

	protected:
		std::string	_type;
		int			_hp;
};

std::ostream &operator<<(std::ostream &flux, Enemy const& copy);

#endif
