/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 12:22:56 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/12 17:10:20 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(/* args */) : FixedPoint(0) {
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &other) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(const int NumInt) : FixedPoint( NumInt << scale) {
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float NumFloat) : FixedPoint(roundf(NumFloat * (1 << scale))) {
	// std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat(void) const {
	return (static_cast<double>(FixedPoint) / (1 << scale));
}

int Fixed::toInt(void) const {
	return (FixedPoint >> scale);
}

Fixed::~Fixed() {
	// std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &other) {
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this == &other) { return (*this); }
	FixedPoint = other.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->FixedPoint);
}

void Fixed::setRawBits(int const raw) {
	// std::cout << "setRawBits member function called" << std::endl;
	this->FixedPoint = raw;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {
  os << fixed.toFloat();
  return (os);
}
