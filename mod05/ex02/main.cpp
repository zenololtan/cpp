/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/24 15:54:42 by ztan          #+#    #+#                 */
/*   Updated: 2021/07/24 21:16:26 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try {
        Form A("this ", 0, 8);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;    
    } 
    Bureaucrat B("My B", 7);
    std::cout << B << std::endl;
    Form C("C", 8, 2);
    std::cout << C << std::endl;
    try {
    B.signForm(C);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;    
    } 
    std::cout << C << std::endl;
    try {
    B.signForm(C);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;    
    } 
    std::cout << C << std::endl;
    return (0);
}
