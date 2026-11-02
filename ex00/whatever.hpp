/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <akonstan@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 17:21:11 by akonstan          #+#    #+#             */
/*   Updated: 2026/11/02 17:34:11 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T& a, T& b){
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template<typename T>
T& min(T& a, T& b){
	if (a < b)
		return a;
	return b;
}

template<typename T>
T& max(T& a, T& b){
	if (a < b)
		return b;
	return a;
}
#endif
