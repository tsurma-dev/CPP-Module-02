/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 13:49:53 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/12 17:44:49 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

bool Fixed::operator>(const Fixed& other) const {
	return (this->FixedPoint > other.FixedPoint);
}

bool Fixed::operator<(const Fixed& other) const {
	return (this->FixedPoint < other.FixedPoint);
}

bool Fixed::operator<=(const Fixed& other) const {
	return (this->FixedPoint <= other.FixedPoint);
}

bool Fixed::operator>=(const Fixed& other) const {
	return (this->FixedPoint >= other.FixedPoint);
}

bool Fixed::operator==(const Fixed& other) const {
	return (this->FixedPoint == other.FixedPoint);
}

bool Fixed::operator!=(const Fixed& other) const {
	return (this->FixedPoint != other.FixedPoint);
}

Fixed Fixed::operator+(const Fixed& other) const {
	Fixed ret;
	ret.setRawBits(this->FixedPoint + other.FixedPoint);
	return (ret);
}

Fixed Fixed::operator-(const Fixed& other) const {
	Fixed ret;
	ret.setRawBits(this->FixedPoint - other.FixedPoint);
	return (ret);
}
Fixed Fixed::operator*(const Fixed& other) const {
	Fixed ret;
	ret.setRawBits(static_cast<int>((static_cast<long long>(this->FixedPoint) * other.FixedPoint) >> this->scale));
	return (ret);
}

Fixed Fixed::operator/(const Fixed& other) const {
	Fixed ret;
	ret.setRawBits(static_cast<int>((static_cast<long long>(this->FixedPoint) << this->scale) / other.FixedPoint));
	return (ret);
}

Fixed& Fixed::operator++( void ) {
  this->FixedPoint += 1;
  return (*this);
}

Fixed Fixed::operator++( int ) {
  Fixed ret ( *this );
  this->FixedPoint += 1;
  return (ret);
}

Fixed& Fixed::operator--(void) {
  this->FixedPoint -= 1;
  return (*this);
}

Fixed Fixed::operator--( int ) {
  Fixed ret ( *this );
  this->FixedPoint -= 1;
  return (ret);
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
  return (a < b ? a : b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
  return (a > b ? a : b);
}

Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
  return (Fixed&)(a < b ? a : b);
}

Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
  return (Fixed&)(a > b ? a : b);
}
