#ifndef PONY_HPP
# define PONY_HPP

class Pony
{
	public:
		Pony();
		Pony(const Pony &copy);
		Pony&	operator=(const Pony &copy);
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
