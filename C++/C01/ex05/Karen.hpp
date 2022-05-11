/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 23:28:28 by jsolinis          #+#    #+#             */
/*   Updated: 2022/05/11 18:01:24 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Karen {

private:

	std::string level[4];

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

public:
	
	Karen(void);
	~Karen(void);

	void	complain(std::string level);
};
