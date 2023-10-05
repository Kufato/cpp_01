/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:32:43 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/02 13:18:33 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string name) {
	this->_infileName = name;
	this->_outfileName = name.append(".replace");
	this->_text = "";
	return ;
}

Replace::~Replace(void) {
	return ;
}

bool	Replace::readAndReplace(std::string s1, std::string s2) {
	size_t			startPos = 0;
	std::ifstream	infile;
	std::ofstream	outfile;

	if (this->_infileName.empty()) {
		std::cout << _RED << "File's name can't be empty" << _END << std::endl;
		return (false);
	}
	if (s1.empty()) {
		std::cout << _RED << "The word you want to replace cannot be empty" << _END << std::endl;
		return (false);
	}
	infile.open(this->_infileName.c_str());
	if (!infile.is_open()) {
		std::cerr << _RED << "Error: Could not open the file" << _END << std::endl;
		return (false);
	}
	getline(infile, this->_text, '\0');
	infile.close();
	while (this->_text.find(s1, startPos) != std::string::npos) {
		startPos = this->_text.find(s1, startPos);
		this->_text.erase(startPos, s1.length());
		this->_text.insert(startPos, s2);
		startPos += s2.length();
	}
	outfile.open(this->_outfileName.c_str());
	if (!outfile.is_open()) {
		std::cerr << _RED << "Error: Could not open the file" << _END << std::endl;
		return (false);
	}
	outfile << this->_text;
	outfile.close();
	return (true);
}
