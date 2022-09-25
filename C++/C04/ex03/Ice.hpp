/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:32:13 by jsolinis          #+#    #+#             */
/*   Updated: 2022/09/25 17:00:07 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {

public:

	Ice(void);
	Ice(std::string const& type);
	~Ice(void);

	virtual Ice*	clone(void) const;
	virtual void	use(ICharacter& target);
};

#endif
