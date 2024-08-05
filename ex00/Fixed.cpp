/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 12:22:56 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/05 16:51:08 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(/* args */) {
	std::cout << "Default constructor called" << std::endl;
	this->FixedPoint = 0;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	this->FixedPoint = other.getRawBits();
}

Fixed& Fixed::operator=(Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &other) { return (*this); }
	FixedPoint = other.FixedPoint;
	return (*this);
}

int Fixed::getRawBits(void) {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->FixedPoint);
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->FixedPoint = raw;
}
