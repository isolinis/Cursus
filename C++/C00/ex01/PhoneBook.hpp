/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 12:07:26 by jsolinis          #+#    #+#             */
/*   Updated: 2022/04/28 18:00:02 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

class PhoneBook {

private:

	int		content;
	int		index;
	Contact contacts[8];

public:

	PhoneBook ( void );
	~PhoneBook ( void );

	void	setIndex ( int x);
	int		getIndex ( void );
	int		getContent ( void );

	Contact	getContact (int i);

	void	addContact ( Contact c );
	void	showPhoneBook ( void );
};

#endif
