/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:06:23 by axcallet          #+#    #+#             */
/*   Updated: 2023/09/15 14:23:49 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class	Weapon {

	private:
		std::string	_type;

	public:
		Weapon(std::string type);
		~Weapon();

		const std::string	&getType(void) const;
		void				setType(const std::string& type); 
};

#endif