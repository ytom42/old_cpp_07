/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:06:07 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/23 15:10:59 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ostream>
#include "iter.hpp"

/*
class Awesome {
	public:
		Awesome() : _n(42) { return; }
		int get() const { return this->_n; }
	private:
		int _n;
};

std::ostream &operator<<(std::ostream &a, Awesome const &rhs )
{
	a << rhs.get(); return a;
}

template<typename T>
void print(T const &x)
{
	std::cout << x << std::endl; return ;
}

int main()
{
	int tab[] = {0,1, 2, 3, 4};
	Awesome tab2[5];
	iter( tab, 5, print );
	iter( tab2, 5, print );
	return 0;
}
*/

template <typename T>
void print(T & t)
{
	std::cout << t << std::endl;
}

void test_int()
{
	std::cout << "===test_int===" << std::endl;
	int ary[] = {1, 2, 3, 4, 5};
	iter(ary, 5, print);
}

void test_char()
{
	std::cout << "===test_char===" << std::endl;
	char ary[] = {'a', 'b', 'c', 'd', 'e'};
	iter(ary, 5, print);
}

void test_float()
{
	std::cout << "===test_float===" << std::endl;
	float ary[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	iter(ary, 5, print);
}

void test_string()
{
	std::cout << "===test_string===" << std::endl;
	std::string ary[] = {"abc", "def", "ghi"};
	iter(ary, 3, print);
}

int main()
{
	test_int();
	test_char();
	test_float();
	test_string();

	return (0);
}
