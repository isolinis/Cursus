/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:58:11 by jsolinis          #+#    #+#             */
/*   Updated: 2022/09/23 19:47:51 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_fractional_bits = 8;

Fixed::Fixed(void) : _fixed_point(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{

	std::cout << "Copy constructor called" << std::endl;
	this->_fixed_point = f._fixed_point;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	_fixed_point = i << Fixed::_fractional_bits;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	_fixed_point = roundf(f * (1 << Fixed::_fractional_bits));
}

Fixed& Fixed::operator=(const Fixed& f)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &f)
		this->_fixed_point = f._fixed_point;
	return (*this);
}
	
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

void	Fixed::setRawBits(int const raw)
{
	_fixed_point = raw;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
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
