/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:18:14 by axcallet          #+#    #+#             */
/*   Updated: 2023/09/14 10:56:00 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie	zombie1("Jean-Jacques");
	Zombie	*zombie2 = newZombie("Leopold-Armand");

	zombie1.announce();
	zombie2->announce();
	randomChump("Professeur Pedoncule");
	delete zombie2;
	return (0);
}