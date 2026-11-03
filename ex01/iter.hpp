/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <akonstan@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:01:13 by akonstan          #+#    #+#             */
/*   Updated: 2026/11/03 13:56:01 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template<typename T>
void printer(const T& input){
	std::cout << input << std::endl;
}

template<typename T, typename Ftype>
void	iter(T* arr, const unsigned int len, Ftype func){
	for (unsigned int i = 0; i < len; ++i)
		func(arr[i]);
}
#endif
