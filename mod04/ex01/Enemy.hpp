#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <string>

class Enemy
{
	protected:
		std::string	_type;
		int			_hp;
	public:
		Enemy();
		Enemy(int hp, std::string const& type);
		Enemy(const Enemy& copy);
		Enemy&			operator=(const Enemy& copy);
		virtual			~Enemy();
		std::string		getType() const;
		int				getHP() const;
		virtual	void	takeDamage(int amount);
};

#endif
