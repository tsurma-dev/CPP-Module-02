/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 12:21:51 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/12 13:45:59 by tsurma           ###   ########.fr       */
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
	Fixed();
	Fixed( Fixed const &other );
	Fixed( const int NumInt );
	Fixed( const float NumFloat );
	~Fixed();
	Fixed& operator=(Fixed const &other);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
	friend std::ostream& operator<<(std::ostream& os, const Fixed &fixed);
};
#endif
