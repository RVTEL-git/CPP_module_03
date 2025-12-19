/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 17:55:53 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/19 19:31:37 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void	ClapTrapTest( void )
{
	std::cout << "=======ClapTrapTest=======\n" <<std::endl;
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

	return ;
}

void	ScavTrapTest( void )
{
	std::cout << "\n=======ScavTrapTest=======\n" <<std::endl;
	ScavTrap Pierre;
	ScavTrap Paul( "Paul" );
	ScavTrap Jack( "Jack" );
	
	Pierre.setName( "Pierre" );
	Pierre.guardGate();
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

	Paul.takeDamage(25);
	std::cout << std::endl;
	Paul.attack (" Fake Pierre ");
	std::cout << std::endl;
	Paul.takeDamage(25);
	std::cout << std::endl;
	Paul.beRepaired(25);
	std::cout << std::endl;

	Jack.takeDamage(75);
	std::cout << std::endl;
	ScavTrap JackCopy( Jack );
	std::cout << std::endl;
	JackCopy.takeDamage(25);
	std::cout << std::endl;

	ClapTrap *ptr = new ScavTrap();
	delete ptr;

	return ;
}

int	main( void )
{
	ClapTrapTest();
	ScavTrapTest();
	return 0;
}