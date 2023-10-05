/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:18:26 by axcallet          #+#    #+#             */
/*   Updated: 2023/09/19 18:24:42 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->_type = type;
	return ;
}

Weapon::~Weapon() {
	return ;
}

const std::string	&Weapon::getType(void) const {
	return (this->_type);
}

void	Weapon::setType(const std::string& type) {
	this->_type = type;
	return ;
}
