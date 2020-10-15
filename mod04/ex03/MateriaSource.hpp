/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/11 19:37:15 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/12 00:32:47 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		int			_count;
		AMateria	*spellbook[3];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& copy);
		MateriaSource&	operator=(const MateriaSource& copy);
		virtual			~MateriaSource();

		void			learnMateria(AMateria* type);
		AMateria*		createMateria(std::string const & type);
};

#endif
