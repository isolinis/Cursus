/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:49:59 by jsolinis          #+#    #+#             */
/*   Updated: 2022/06/20 22:08:17 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(), _y()
{
}

Point::Point(float const f1, float const f2) : _x(f1), _y(f2)
{
}

Fixed Point::getXvalue(void) const
{
	return (this->_x);
}

Fixed Point::getYvalue(void) const
{
	return (this->_y);
}

Point::~Point(void)
{
}

std::ostream& operator<<(std::ostream& os, const Point& p)
{
	os << "El valor de x es " << p.getXvalue() << ", y el de y es " << p.getYvalue();
	return (os);
}
