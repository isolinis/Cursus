/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:33:16 by jsolinis          #+#    #+#             */
/*   Updated: 2022/09/28 18:49:19 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

class AMateria {

protected:

	std:: string	type;

public:

	AMateria(void);
	AMateria(std::string const& type);
	AMateria(const AMateria& amateria);
	AMateria& operator=(const AMateria& amateria);
	virtual	~AMateria(void);

	std::string const& getType(void) const;
	virtual AMateria*	clone(void) const = 0;
	virtual void	use(ICharacter& target);
};

#endif
