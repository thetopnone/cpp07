/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akonstan <akonstan@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:35:48 by akonstan          #+#    #+#             */
/*   Updated: 2026/11/11 11:14:12 by akonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

template<typename T>
Array<T>::Array()
	:arr(new T[0])
	,arr_size(0)
{}

template<typename T>
Array<T>::Array(unsigned int n)
	:arr(new T[n])
	,arr_size(n)
{}

template<typename T>
Array<T>::Array(const Array<T>& other)
	:arr(new T[other.size()])
	,arr_size(other.size())
{
	for (int i = 0; i < arr_size; ++i){
		arr[i] = other[i];
	}
}

template<typename T>
Array<T>& Array<T>::operator=(const Array<T>& other){
	if (this != &other){
		int size = other.size();
		T* temp = new T[size];
		this->arr_size = size;
		for (int i = 0; i < size; ++i){
			temp[i] = other[i];
		}
		delete[] this->arr;
		this->arr = temp;
	}
	return *this;
}

template<typename T>
Array<T>::~Array(){
	delete[] this->arr;
}

template<typename T>
T& Array<T>::operator[](int idx){
	if (idx < 0 || idx >= arr_size || arr_size == 0)
		throw std::exception();
	return this->arr[idx];
}

template<typename T>
const T& Array<T>::operator[](int idx) const{
	if (idx < 0 || idx >= arr_size ||  arr_size == 0)
		throw std::exception();
	return this->arr[idx];
}

template<typename T>
int Array<T>::size() const{
	return this->arr_size;
}
#endif
