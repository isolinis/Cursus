/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 19:57:04 by jsolinis          #+#    #+#             */
/*   Updated: 2022/05/12 20:03:57 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

class Contact {

private:

	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string phone_number;
	std::string	darkest_secret;

public:

	Contact ( void );
	~Contact ( void );

	void	setFname ( std::string fname );
	void	setLname ( std::string lname );
	void	setNick ( std::string nick );
	void	setPnumber ( std::string pnumber );
	void	setDsecret ( std::string dsecret );

	std::string	getFname ( void );
	std::string	getLname ( void );
	std::string	getNick ( void );
	std::string getPnumber ( void);
	std::string getDsecret ( void );
	
	void	toString ( void );
	void	showContact ( void );
};

#endif
