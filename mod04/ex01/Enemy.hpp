#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <string>

class Enemy
{
	protected:
		std::string	_type;
		int			_hp;
	public:
		Enemy() {}
		Enemy(const Enemy& copy);
		Enemy&			operator=(const Enemy& copy);
		virtual			~Enemy() {}

		Enemy(int hp, std::string const& type);
		std::string		getType() const;
		int				getHP() const;
		virtual	void	takeDamage(int amount);
};

#endif
