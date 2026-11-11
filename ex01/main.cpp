/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <akonstan@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:33:29 by akonstan          #+#    #+#             */
/*   Updated: 2026/11/11 11:07:40 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "iter.hpp"

static void incrementor(int& num){
	num += 1;
}

static void counter(const int& num){
	static int sum = 0;

	sum += num;
	std::cout << "Sum: " << sum << std::endl;
}

int main(void){
	const std::string a[] = {"one", "two", "three", "fifty"};
	int b[] = {1, 2, 3, 4, 5};

	iter(a, 4, printer<std::string>);
	iter(b, 5, counter);
	iter(b, 5, printer<int>);
	iter(b, 5, incrementor);
	iter(b, 5, printer<int>);
	return 0;
}
