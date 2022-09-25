/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:58:11 by jsolinis          #+#    #+#             */
/*   Updated: 2022/09/25 13:50:09 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_fractional_bits = 8;

Fixed::Fixed(void) : _fixed_point(0)
{
}

Fixed::Fixed(const Fixed &f)
{
	this->_fixed_point = f._fixed_point;
}

Fixed::Fixed(const int i)
{
	_fixed_point = i << Fixed::_fractional_bits;
}

Fixed::Fixed(const float f)
{
	_fixed_point = roundf(f * (1 << Fixed::_fractional_bits));
}

Fixed& Fixed::operator=(const Fixed& f)
{
	if (this != &f)
		this->_fixed_point = f._fixed_point;
	return (*this);
}

Fixed Fixed::operator+(const Fixed& f) const
{
	Fixed ret(0);

	ret._fixed_point = this->_fixed_point + f._fixed_point;
	return (ret);
}

Fixed Fixed::operator-(const Fixed& f) const
{
	Fixed ret(0);

	ret._fixed_point = this->_fixed_point - f._fixed_point;
	return (ret);
}

Fixed Fixed::operator*(const Fixed& f) const
{
	Fixed ret(0);

	ret._fixed_point = Fixed(this->toFloat() * f.toFloat());
	return (ret);
}

Fixed Fixed::operator/(const Fixed& f) const
{
	Fixed ret(0);

	if (f._fixed_point == 0)
		ret._fixed_point = 0;
	ret = Fixed(this->toFloat() / f.toFloat());
	return (ret);
}

Fixed Fixed::operator++(void)
{
	Fixed ret;

	ret._fixed_point = ++_fixed_point;
	return (ret);
}

Fixed Fixed::operator++(int)
{
	Fixed ret;

	ret._fixed_point = _fixed_point++;
	return (ret);

}

Fixed Fixed::operator--(void)
{
	Fixed ret;

	ret._fixed_point = --_fixed_point;
	return (ret);
}

Fixed Fixed::operator--(int)
{
	Fixed ret;

	ret._fixed_point = _fixed_point--;
	return (ret);
}

Fixed&	Fixed::min(Fixed& f1, Fixed& f2)
{
	return ((f1 < f2) ? f1 : f2);
}

const Fixed&	Fixed::min(const Fixed& f1, const Fixed& f2)
{
	return ((f1 < f2) ? f1 : f2);
}

Fixed&	Fixed::max(Fixed& f1, Fixed& f2)
{
	return ((f1 > f2) ? f1 : f2);
}

const Fixed&	Fixed::max(const Fixed& f1, const Fixed& f2)
{
	return ((f1 > f2) ? f1 : f2);
}


Fixed::~Fixed(void)
{
}

void	Fixed::setRawBits(int const raw)
{
	_fixed_point = raw;
}

int	Fixed::getRawBits(void) const
{
	return (_fixed_point);
}

float	Fixed::toFloat(void) const
{
	float ret;

	ret = ((float) _fixed_point / 256);
	return (ret);
}

int	Fixed::toInt(void) const
{
	int	ret;

	ret = _fixed_point >> Fixed::_fractional_bits;
	return (ret);
}

std::ostream& operator<<(std::ostream& os, const Fixed& f)
{
	os << f.toFloat();
	return (os);
}

bool operator>(const Fixed& f1, const Fixed& f2)
{
	return (f1.getRawBits() > f2.getRawBits());
}

bool operator<(const Fixed& f1, const Fixed& f2)
{
	return (f1.getRawBits() < f2.getRawBits());
}

bool operator>=(const Fixed& f1, const Fixed& f2)
{
	return (f1.getRawBits() >= f2.getRawBits());
}

bool operator<=(const Fixed& f1, const Fixed& f2)
{
	return (f1.getRawBits() <= f2.getRawBits());
}

bool operator==(const Fixed& f1, const Fixed& f2)
{
	return (f1.getRawBits() == f2.getRawBits());
}

bool operator!=(const Fixed& f1, const Fixed& f2)
{
	return (f1.getRawBits() != f2.getRawBits());
}
