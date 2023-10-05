/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:01:43 by axcallet          #+#    #+#             */
/*   Updated: 2023/09/14 10:10:26 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

# define _END		"\033[0m"
# define _RED		"\033[0;31m"
# define _GREEN		"\033[0;32m"
# define _YELLOW	"\033[0;33m"
# define _CYAN		"\033[0;36m"
# define _PURPLE	"\033[0;35m"

class	Zombie {

	private:
		std::string	name;

	public:
		Zombie(std::string name);
		~Zombie();
	
		void	announce(void);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif