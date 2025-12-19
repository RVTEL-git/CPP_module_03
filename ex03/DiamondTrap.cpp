/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 19:47:34 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/19 20:34:44 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap("diamondDefault_clapTrap")
{
	this->_name = "Default diamond name";
	this->FragTrap::_hitPoints;
	this->ScavTrap::_energyPoints;
	this->FragTrap::_attackDamage;
	std::cout << "Default DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( std::string const name ) : ClapTrap(name + "_clap_name")
{
	this->_name = name;
	this->FragTrap::_hitPoints;
	this->ScavTrap::_energyPoints;
	this->FragTrap::_attackDamage;
	std::cout << "String DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src ) : ClapTrap(src)
{
	std::cout << "Copy DiamondTrap constructor called" << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap ( void )
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
	return ;
}

DiamondTrap & DiamondTrap::operator=( DiamondTrap const & rhs )
{
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return (*this);
}

void	DiamondTrap::attack( std::string const & target )
{
	ScavTrap::attack( target );
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap name " << this->_name << " is inheritance from ClapTrap named " << ClapTrap::_name << std::endl;
}