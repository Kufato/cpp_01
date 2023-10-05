/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:18:14 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/02 13:11:24 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie	*horde = zombieHorde(4, "Benoit Magimel");

	if (!horde)
		return (1);
	for (int i = 0; i < 4; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}