#ifndef PONY_HPP
# define PONY_HPP

class Pony
{
	public:
		Pony();
		~Pony();
		void	feed();
		void	ride();
		void	pet();
	private:
		int		speed;
		int		strength;
};

void	ponyOnTheStack();
void	ponyOnTheHeap();

#endif
