/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 17:55:47 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/19 18:18:54 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name( "Default" ), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default ClapTrap constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string const name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "String ClapTrap constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap( ClapTrap const & src )
{
	std::cout << "Copy ClapTrap constructor called" << std::endl;
	*this = src;
	return ;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap destructor called" << std::endl;
	return ;
}

ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs )
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

void	ClapTrap::setName( std::string const name )
{
	this->_name = name;
	return ;
}

void	ClapTrap::attack( std::string const & target )
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " has no hit point" << std::endl;
		return ;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy point" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
	std::cout << _energyPoints << " energy point left" << std::endl;
	return ;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (this->_hitPoints == 0)
	{
		std::cout << _name << " is already dead!\nIt can't take any damages" << std::endl;
		return ;
	}
	this->_hitPoints -= amount;
	if (this->_hitPoints == 0)
		std::cout << _name << " took " << amount << " points of damage and died!" << std::endl;
	else
		std::cout << _name << " took " << amount << " points of damage!" << std::endl;
	std::cout << _hitPoints << " hit point left" << std::endl;
	return ;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_hitPoints == 0)
	{
		std::cout << _name << " has no hit point so it can't repair itself" << std::endl;
		return ;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << _name << " has no energy point point so it can't repair itself" << std::endl;
		return ;
	}
	else
	{
		this->_hitPoints += amount;
		this->_energyPoints--;
		std::cout << _name << " repaired itself\nIt gained " << amount << " energy point(s)" << std::endl;
	}
}
