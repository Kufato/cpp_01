/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:42:41 by axcallet          #+#    #+#             */
/*   Updated: 2023/09/29 11:56:14 by axcallet         ###   ########.fr       */
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
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-" << std::flush;
	std::cout << "ketchup burger. I really do!" << std::endl;
	return ;
}

void	Harl::info(void) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put" << std::flush;
	std::cout << "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return ;
}

void	Harl::warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for" << std::flush;
	std::cout << "years whereas you started working here since last month." << std::endl;
	return ;
}

void	Harl::error(void) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}

void	Harl::complain(std::string level) {
		size_t		i = 0;
		std::string	levelTab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		
		while (i < 4 && level != levelTab[i])
			i++;
		switch (i) {
			case 0:
				this->debug();
				std::cout << std::endl;
			case 1:
				this->info();
				std::cout << std::endl;
			case 2:
				this->warning();
				std::cout << std::endl;
			case 3:
				this->error();
				std::cout << std::endl;
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
				std::cout << std::endl;
				break;
		}
	return ;
}
