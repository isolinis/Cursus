#include <iostream>
#include "Fixed.hpp"

int	main( void )
{
	Fixed	a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	Fixed	e;
	Fixed	z;
	Fixed const	y( Fixed( 5.05f ) * Fixed( 2 ) );

	a = Fixed( 1234.4321f );

	std::cout << "El valor de a es " << a.toFloat() << std::endl;
	std::cout << "El valor de b es " << b.toFloat() << std::endl;
	std::cout << "El valor de c es " << c.toFloat() << std::endl;
	std::cout << "El valor de d es " << d.toFloat() << std::endl;
	std::cout << "a > b " << ((a > b) ? "True" : "False") << std::endl;
	std::cout << "c < d " << ((c < d) ? "True" : "False") << std::endl;
	std::cout << "a >= c " << ((a >= c) ? "True" : "False") << std::endl;
	std::cout << "b <= d " << ((b <= d) ? "True" : "False") << std::endl;
	std::cout << "a == c " << ((a == c) ? "True" : "False") << std::endl;
	std::cout << "b == d " << ((b == d) ? "True" : "False") << std::endl;
	std::cout << "a != c " << ((a != c) ? "True" : "False") << std::endl;
	std::cout << "b != d " << ((b != d) ? "True" : "False") << std::endl;
	e = b + d;
	std::cout << "b + d is " << e << std::endl;
	e = a + c;
	std::cout << "a + c is " << e << std::endl;
	e = b - d;
	std::cout << "b - d is " << e << std::endl;
	e = b * d;
	std::cout << "b * d is " << e << std::endl;
	e = b / d;
	std::cout << "b / d is " << e << std::endl;
	e = a / c;
	std::cout << "a / c is " << e << std::endl;

	std::cout << z << std::endl;
	std::cout << ++z << std::endl;
	std::cout << z << std::endl;
	std::cout << z++ << std::endl;
	std::cout << z << std::endl;
	std::cout << y << std::endl;
	z = e;
	std::cout << "The smallest value between " << z << " & " << y << " is ";
	std::cout << Fixed::min( z, y ) << std::endl;
	std::cout << "The biggest value between " << z << " & " << y << " is ";
	std::cout << Fixed::max( z, y ) << std::endl;
	return (0);
}
