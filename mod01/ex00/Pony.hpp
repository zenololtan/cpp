/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 00:21:28 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 00:21:29 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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
