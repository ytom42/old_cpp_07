/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytomiyos <ytomiyos@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:06:07 by ytomiyos          #+#    #+#             */
/*   Updated: 2021/11/22 19:51:20 by ytomiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "whatever.hpp"

void test_int()
{
	std::cout << "=======test_int=======" << std::endl;
	int a = 2;
	int b = 3;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "swap( a, b )" << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::cout << "min( 1, 2 ) = " << ::min( 1, 2 ) << std::endl;
	std::cout << "max( 1, 2 ) = " << ::max( 1, 2 ) << std::endl;
	std::cout << "min( 4200, -4200 ) = " << ::min( 4200, -4200 ) << std::endl;
	std::cout << "max( 4200, -4200 ) = " << ::max( 4200, -4200 ) << std::endl;
	std::cout << "min( -1, -1 ) = " << ::min( -1, -1 ) << std::endl;
	std::cout << "max( -1, -1 ) = " << ::max( -1, -1 ) << std::endl;
}

void test_char()
{
	std::cout << "=======test_char=======" << std::endl;
	char a = 'a';
	char b = 'b';
	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "swap ( a, b )" << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::cout << "min( '4', '2' ) = " << ::min( '4', '2' ) << std::endl;
	std::cout << "max( '4', '2' ) = " << ::max( '4', '2' ) << std::endl;
	std::cout << "min( 'z', 'z' ) = " << ::min( 'z', 'z' ) << std::endl;
	std::cout << "max( 'z', 'z' ) = " << ::max( 'z', 'z' ) << std::endl;
}

void test_float()
{
	std::cout << "=======test_float=======" << std::endl;
	float a = 2.0;
	float b = 3.0;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "swap ( a, b )" << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::cout << "min( 1.0, 2.0 ) = " << ::min( 1.0, 2.0 ) << std::endl;
	std::cout << "max( 1.0, 2.0 ) = " << ::max( 1.0, 2.0 ) << std::endl;
	std::cout << "min( 42.0, -42.0 ) = " << ::min( 42.0, -42.0 ) << std::endl;
	std::cout << "max( 42.0, -42.0 ) = " << ::max( 42.0, -42.0 ) << std::endl;
	std::cout << "min( 5.5, 5.5 ) = " << ::min( 5.5, 5.5 ) << std::endl;
	std::cout << "max( 5.5, 5.5 ) = " << ::max( 5.5, 5.5 ) << std::endl;
}

void test_string()
{
	std::cout << "=======test_string=======" << std::endl;
	std::string a = "chaine1";
	std::string b = "chaine2";
	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap(a, b);
	std::cout << "swap ( a, b )" << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::cout << "min( abcdef, ghijkl ) = " << ::min( "abcdef", "ghijkl" ) << std::endl;
	std::cout << "max( abcdef, ghijkl ) = " << ::max( "abcdef", "ghijkl" ) << std::endl;
	std::cout << "min( 42, 42 ) = " << ::min( "42", "42" ) << std::endl;
	std::cout << "max( 42, 42 ) = " << ::max( "42", "42" ) << std::endl;
}

int main()
{
	test_int();
	test_char();
	test_float();
	test_string();

	return (0);
}
