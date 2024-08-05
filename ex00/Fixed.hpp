/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 12:21:51 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/05 16:42:45 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

/*
One copy of the static var in class scope will be shared by all instances.
*/

class Fixed {
private:
	int					FixedPoint;
	static const int	store = 8;
public:
	Fixed(/* args */);
	~Fixed();
	Fixed(Fixed& other);
	Fixed& operator=(Fixed& other);
	int getRawBits(void);
	void setRawBits(int const raw);
};

#endif
