/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 19:55:15 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/22 23:19:00 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

void test_int()
{
	std::cout << "==============test_int==============" << std::endl;
	Array<int> a(10);
	int ary[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	for (int i = 0; i < 10; i++)
		a[i] = ary[i];
	
	std::cout << "size: " << a.size() << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << a[i] << std::endl;
}

void test_char()
{
	std::cout << "==============test_char==============" << std::endl;
	Array<char> a(10);
	char ary[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
	for (int i = 0; i < 10; i++)
		a[i] = ary[i];

	std::cout << "size: " << a.size() << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << a[i] << std::endl;
}

void test_float()
{
	std::cout << "==============test_float==============" << std::endl;
	Array<float> a(10);
	float ary[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0};
	for (int i = 0; i < 10; i++)
		a[i] = ary[i];
	
	std::cout << "size: " << a.size() << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << a[i] << std::endl;
}

void test_string()
{
	std::cout << "==============test_string==============" << std::endl;
	Array<std::string> a(5);
	std::string ary[] = {"hoge", "fuga", "piyo", "42", "tokyo"};
	for (int i = 0; i < 5; i++)
		a[i] = ary[i];

	std::cout << "size: " << a.size() << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << a[i] << std::endl;
}

void test_error()
{
	std::cout << "==============test_error==============" << std::endl;
	Array<int> a(10);
	a[1000] = 42;
}

int main()
{
	test_int();
	test_char();
	test_float();
	test_string();
	test_error();

	return (0);
}
