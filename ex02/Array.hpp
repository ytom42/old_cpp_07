/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 19:55:18 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/23 15:47:58 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
	private:
		T *_array;
		unsigned int _size;
	public:
		Array(void);
		Array(unsigned int n);
		Array(Array const &copy);
		~Array(void);
		Array &operator=(Array const &copy);
		T &operator[](unsigned int n);
		unsigned int size(void) const;
};

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
	T *tmp;
	tmp = new T[copy._size];
	delete [] this->_array;
	this->_array = tmp;
	this->_size = copy._size;
	for (unsigned int i = 0; i < copy._size; i++)
		this->_array[i] = copy._array[i];
	return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int n)
{
	try {
		if (n >= this->_size)
			throw std::out_of_range("index out of range");
	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (this->_array[n]);
}

template <typename T>
unsigned int Array<T>::size(void) const
{
	return (this->_size);
}

#endif
