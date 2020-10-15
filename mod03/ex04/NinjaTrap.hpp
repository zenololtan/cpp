/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: zenotan <zenotan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 15:31:04 by zenotan       #+#    #+#                 */
/*   Updated: 2020/10/15 15:31:05 by zenotan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
public:
	NinjaTrap();
	NinjaTrap(const std::string _name);
	NinjaTrap(const NinjaTrap &old);
	NinjaTrap&		operator=(const NinjaTrap &old);
	virtual			~NinjaTrap();

    void			ninjaShoebox(NinjaTrap &ninja);
	void			ninjaShoebox(FragTrap &frag);
    void			ninjaShoebox(ScavTrap &scav);
};

#endif
