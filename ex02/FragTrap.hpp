/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 19:18:14 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/19 19:30:13 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap( void );
		FragTrap( std::string const name );
		FragTrap( FragTrap const & src );
		~FragTrap ( void );

		FragTrap &	operator=( FragTrap const & rhs );

		void highFivesGuys( void );
};