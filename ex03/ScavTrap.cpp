/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 17:50:11 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/19 18:35:48 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string const name ) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "String ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & src ) : ClapTrap(src)
{
	std::cout << "Copy ScavTrap constructor called" << std::endl;
	return ;
}

ScavTrap::~ScavTrap ( void )
{
	std::cout << "ScavTrap Destructor called" << std::endl;
	return ;
}

ScavTrap & ScavTrap::operator=( ScavTrap const & rhs )
{
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return (*this);
}

void	ScavTrap::attack( std::string const & target )
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ScavTrap " << _name << " has no hit point" << std::endl;
		return ;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "ScavTrap " << _name << " has no energy point" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
	std::cout << _energyPoints << " energy point left" << std::endl;
	return ;
}

void	ScavTrap::guardGate( void )
{
	std::cout << " ScavTrap " << _name << " is now in Gate keeper mode!" << std::endl;
}