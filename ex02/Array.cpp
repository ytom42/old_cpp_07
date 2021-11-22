/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 20:02:47 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/22 22:34:37 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include "Array.hpp"

template <typename T>
Array<T>::Array(void)
{
	this->_array = new T[0];
	this->_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	this->_array = new T[n];
	this->_size = n;
}

template <typename T>
Array<T>::Array(Array const &copy)
{
	this->_array = new T[copy._size];
	this->_size = copy._size;
	for (unsigned int i = 0; i < copy._size; i++)
		this->_array[i] = copy._array[i];
}

template <typename T>
Array<T>::~Array(void)
{
	delete [] this->_array;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &copy)
{
	delete [] this->_array;
	this->_array = new T[copy._size];
	this->_size = copy._size;
	for (unsigned int i = 0; i < copy._size; i++)
		this->_array[i] = copy._array[i];
	return (*this);
}

template <typename T>
Array<T> &Array<T>::operator[](unsigned int n)
{
	if (n >= this->_size)
		throw std::exception();
	return (this->_array[n]);
}

template <typename T>
unsigned int Array<T>::size(void) const
{
	return (this->_size);
}
