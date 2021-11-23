/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 19:55:15 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/23 15:50:11 by ytomiyos         ###   ########.fr       */
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

	Array<std::string> b(3);
	b = a;
	std::cout << "size: " << b.size() << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << b[i] << std::endl;
}

class Awesome {
	private:
		int _n;
	public:
		Awesome() : _n(0) {}
		Awesome(int n) : _n(n) { return; }
		int get() const { return this->_n; }
};
void test_class()
{
	std::cout << "==============test_class==============" << std::endl;
	Array<Awesome> a(3);
	Awesome ary[] = {Awesome(1), Awesome(2), Awesome(3)};
	for (int i = 0; i < 3; i++)
		a[i] = ary[i];

	std::cout << "size: " << a.size() << std::endl;
	for (int i = 0; i < 3; i++)
		std::cout << a[i].get() << std::endl;

	Array<Awesome> b(3);
	b = a;
	std::cout << "size: " << b.size() << std::endl;
	for (int i = 0; i < 3; i++)
		std::cout << b[i].get() << std::endl;
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
	test_class();
	test_error();

	return (0);
}
