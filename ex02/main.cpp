/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 12:43:20 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/12 17:46:11 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
Fixed c( 42 );
Fixed d( 42.42f );

std::cout << c.toFloat() << "  >  " << d.toFloat() << " is " << (c > d) << "\n";
std::cout << c.toFloat() << "  <  " << d.toFloat() << " is " << (c < d) << "\n";
std::cout << c.toFloat() << "  == " << d.toFloat() << " is " << (c == d) << "\n";
std::cout << c.toFloat() << "  == " << c.toFloat() << "      is " << (c == c) << "\n";
std::cout << c.toFloat() << "  +  " << d.toFloat() << " is " << (c + d) << "\n";
std::cout << c.toFloat() << "  -  " << d.toFloat() << " is " << (c - d) << "\n";
std::cout << c.toFloat() << "  *  " << d.toFloat() << " is " << (c * d) << "\n";
std::cout << d.toFloat() << "  /  " << c.toFloat() << " is " << (d / c) << "\n";
std::cout << c.toFloat() << " pre++ is " << "(" << (++c) << ") " << c.toFloat() << "\n";
--c;
std::cout << c.toFloat() << " post++ is " << "(" << (c++) << ") " << c.toFloat() << "\n";
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
std::cout << std::endl;

}
