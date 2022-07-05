/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:50:50 by jsolinis          #+#    #+#             */
/*   Updated: 2022/05/12 20:04:13 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {

private:

	int					_fixed_point;
	static const int	_fractional_bits;

public:

	Fixed(void);
	Fixed(const Fixed& f);
	Fixed(const int i);
	Fixed(const float f);
	Fixed& operator=(const Fixed& f);
	Fixed operator+(const Fixed& f) const;
	Fixed operator-(const Fixed& f) const;
	Fixed operator*(const Fixed& f) const;
	Fixed operator/(const Fixed& f) const;
	Fixed operator++(void);
	Fixed operator++(int);
	Fixed operator--(void);
	Fixed operator--(int);
	static Fixed& min(Fixed& f1, Fixed& f2);
	static const Fixed& min(const Fixed& f1, const Fixed& f2);
	static Fixed& max(Fixed& f1, Fixed& f2);
	static const Fixed& max(const Fixed& f1, const Fixed& f2);

	~Fixed(void);

	void	setRawBits(int const raw);
	int		getRawBits(void) const;
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);
bool operator>(const Fixed& f1, const Fixed& f2);
bool operator<(const Fixed& f1, const Fixed& f2);
bool operator>=(const Fixed& f1, const Fixed& f2);
bool operator<=(const Fixed& f1, const Fixed& f2);
bool operator==(const Fixed& f1, const Fixed& f2);
bool operator!=(const Fixed& f1, const Fixed& f2);

#endif
