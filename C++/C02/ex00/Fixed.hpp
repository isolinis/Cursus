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

class Fixed {

private:

	int					_fixed_point;
	static const int	_fractional_bits;

public:

	Fixed(void);
	Fixed(const Fixed& f);
	Fixed& operator=(const Fixed& f);
	~Fixed(void);

	void	setRawBits(int const raw);
	int		getRawBits(void) const;
};

#endif
