/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 12:21:51 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/12 17:48:46 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

/*
One copy of the static var in class scope will be shared by all instances.
*/

class Fixed {
private:
	int					FixedPoint;
	static const int	scale = 8;
public:
	Fixed();	//default constructor
	Fixed( const Fixed& ); //copy constructor
	Fixed( const int ); //int constructor
	Fixed( const float ); //float constructor
	~Fixed(); //destructor
	Fixed& operator=(const Fixed& ); //copy assignment operator
	int getRawBits( void ) const;
	void setRawBits( int const );
	float toFloat( void ) const;
	int toInt( void ) const;
	friend std::ostream& operator<<(std::ostream&, const Fixed&);
	bool operator>( const Fixed& ) const;
	bool operator<( const Fixed& ) const;
	bool operator>=( const Fixed& ) const;
	bool operator<=( const Fixed& ) const;
	bool operator==( const Fixed& ) const;
	bool operator!=( const Fixed& ) const;
	Fixed operator+( const Fixed& ) const;
	Fixed operator-( const Fixed& ) const;
	Fixed operator*( const Fixed& ) const;
	Fixed operator/( const Fixed& ) const;
	Fixed& operator++( void );
	Fixed operator++( int );
	Fixed& operator--( void );
	Fixed operator--( int );
	static Fixed& min( Fixed&, Fixed& );
	static Fixed& max( Fixed&, Fixed& );
	static Fixed& min( const Fixed&, const Fixed& );
	static Fixed& max( const Fixed&, const Fixed& );
};

#endif
