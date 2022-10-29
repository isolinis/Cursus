/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 02:25:22 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/29 03:06:26 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>

class Data
{
private:
    
    std::string _user;
    int _id;

public:

    Data(void);
    Data(std::string aUser, int anId);
    Data(const Data& data);
    Data& operator=(const Data& data);
    ~Data(void);

    std::string getUser(void) const;
    int getId(void) const;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

std::ostream& operator<<(std::ostream& os, const Data& data);

#endif