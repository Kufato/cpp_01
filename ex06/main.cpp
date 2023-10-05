/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:31:24 by axcallet          #+#    #+#             */
/*   Updated: 2023/09/21 11:54:38 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << _RED << "Invalid number of arguments" << _END << std::endl;
		return (1);
	}
	Harl	harlFilter;
	
	harlFilter.complain(argv[1]);
	return (1);
}