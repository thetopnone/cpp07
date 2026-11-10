/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <akonstan@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 17:29:33 by akonstan          #+#    #+#             */
/*   Updated: 2026/11/10 17:42:05 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

int main(void){
	int a = 2;
	int b = 3;

	WHATEVER_HPP::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << WHATEVER_HPP::min( a, b ) << std::endl;
	std::cout << "max(a, b) = " << WHATEVER_HPP::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	WHATEVER_HPP::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << WHATEVER_HPP::min( c, d ) << std::endl;
	std::cout << "max(c, d) = " << WHATEVER_HPP::max( c, d ) << std::endl;

	return 0;
}
