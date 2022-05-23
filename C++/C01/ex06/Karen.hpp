/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 23:28:28 by jsolinis          #+#    #+#             */
/*   Updated: 2022/05/12 20:53:28 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Karen;

typedef struct s_complains
{
	std::string level;
	void		(Karen::*fptr)(void);
} t_complains;

class Karen {

private:

	t_complains	_complains[4];

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

public:
	
	Karen(void);
	~Karen(void);

	void	complain(std::string level);
};
