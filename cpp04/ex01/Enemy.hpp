
#ifndef ENEMY_HPP
#define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
	public:
		Enemy();
		Enemy(int hp, std::string type);
		Enemy(Enemy const& copy);
		virtual ~Enemy();
		Enemy& operator=(Enemy const& copy);

		int	getHP() const;
		std::string	getType() const;
		virtual void takeDamage(int);

	protected:
		int			_hp;
		std::string	_type;
};

std::ostream &operator<<(std::ostream &flux, Enemy const& copy);

#endif
