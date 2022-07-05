/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:41:30 by jsolinis          #+#    #+#             */
/*   Updated: 2022/06/20 22:03:04 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

class Point {

private:

	Fixed const	_x;
	Fixed const	_y;

public:

	Point(void);
	Point(float const f1, float const f2);
/*	Point(const Point& p);
	Point& operator=(const Point& p);*/
	
	Fixed getXvalue(void) const;
	Fixed getYvalue(void) const;

	~Point(void);
};

std::ostream& operator<<(std::ostream& os, const Point& p);

#endif
	
