/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:27:16 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/02 13:17:02 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4) {
		std::cout << _RED << "Invalid number of arguments" << _END << std::endl;
		return (1);
	}
	Replace	mister_Replace(argv[1]);
	if (!mister_Replace.readAndReplace(argv[2], argv[3]))
		return (1);
	return (0);
}