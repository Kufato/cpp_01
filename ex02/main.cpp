/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:04:07 by axcallet          #+#    #+#             */
/*   Updated: 2023/09/14 14:55:27 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void) {
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << std::endl;
	std::cout << "Memory address of the string:\t " << &str << std::endl;
	std::cout << "Memory address of stringPTR:\t " << stringPTR << std::endl;
	std::cout << "Memory address of stringREF:\t " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "Value of the string:\t\t " << str << std::endl;
	std::cout << "Value of stringPTR:\t\t " << *stringPTR << std::endl;
	std::cout << "Value of stringREF:\t\t " << stringREF << std::endl;
	std::cout << std::endl;
	return (0);
}