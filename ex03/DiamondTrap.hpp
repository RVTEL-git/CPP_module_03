/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 19:48:18 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/19 20:23:33 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string	_name;
	public:
		DiamondTrap( void );
		DiamondTrap( std::string const name );
		DiamondTrap( DiamondTrap const & src );
		virtual ~DiamondTrap ( void );

		DiamondTrap &	operator=( DiamondTrap const & rhs );

		void	attack( std::string const & target );

		void	whoAmI( void );
}
