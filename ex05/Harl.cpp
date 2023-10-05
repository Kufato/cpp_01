/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:42:41 by axcallet          #+#    #+#             */
/*   Updated: 2023/09/21 11:55:40 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){
	return ;
}

Harl::~Harl(void){
	return ;
}

void	Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-" << std::flush;
	std::cout << "ketchup burger. I really do!" << std::endl;
	return ;
}

void	Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put" << std::flush;
	std::cout << "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return ;
}

void	Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for" << std::flush;
	std::cout << "years whereas you started working here since last month." << std::endl;
	return ;
}

void	Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}

void	Harl::complain(std::string level) {
		std::string	levelTab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		void		(Harl::*tab[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

		for (int i = 0; i < 4; i++) {
			if (level == levelTab[i])
				(this->*tab[i])();
		}
	return ;
}
