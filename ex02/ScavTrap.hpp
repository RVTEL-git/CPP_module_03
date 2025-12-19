/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 12:41:14 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/19 18:35:48 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_HPP
#define ScavTrap_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap( void );
		ScavTrap( std::string const name );
		ScavTrap( ScavTrap const & src );
		virtual ~ScavTrap ( void );

		ScavTrap &	operator=( ScavTrap const & rhs );

		void	attack( std::string const & target );
		void	guardGate( void );
};


#endif