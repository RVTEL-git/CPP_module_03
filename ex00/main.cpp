/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 17:55:53 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/19 19:33:06 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap Pierre;
	ClapTrap Paul( "Paul" );
	ClapTrap Jack( "Jack" );
	
	Pierre.setName( "Pierre" );
	std::cout << std::endl;
	Pierre.attack( "Fake Paul" );
	std::cout << std::endl;
	Pierre.takeDamage( 5 );
	std::cout << std::endl;
	Pierre.beRepaired( 5 );
	std::cout << std::endl;
	Pierre.attack( "Fake Paul" );
	std::cout << std::endl;
	Pierre.takeDamage( 5 );
	std::cout << std::endl;
	Pierre.attack( "Fake Paul" );
	std::cout << std::endl;
	Pierre.attack( "Fake Paul" );
	std::cout << std::endl;
	Pierre.attack( "Fake Paul" );
	std::cout << std::endl;
	Pierre.attack( "Fake Paul" );
	std::cout << std::endl;
	Pierre.attack( "Fake Paul" );
	std::cout << std::endl;
	Pierre.beRepaired( 5 );
	std::cout << std::endl;
	Pierre.attack( "Fake Paul" );
	std::cout << std::endl;
	Pierre.attack( "Fake Paul" );
	std::cout << std::endl;


	Paul.takeDamage(10);
	std::cout << std::endl;
	Paul.attack (" Fake Pierre ");
	std::cout << std::endl;
	Paul.takeDamage(10);
	std::cout << std::endl;
	Paul.beRepaired(10);
	std::cout << std::endl;

	Jack.takeDamage(10);
	std::cout << std::endl;
	ClapTrap JackCopy( Jack );
	std::cout << std::endl;
	JackCopy.takeDamage(10);
	std::cout << std::endl;

	return 0;
}