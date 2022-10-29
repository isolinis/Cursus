/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 02:23:55 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/29 03:10:24 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(void) : _user("undefined"), _id(-1)
{
}

Data::Data(std::string aUser, int anId) : _user(aUser), _id(anId)
{
}

Data::Data(const Data& data)
{
    *this = data;
}

Data& Data::operator=(const Data& data)
{
    if (this != &data)
    {
        this->_user = data._user;
        this->_id = data._id;
    }
    return *this;
}

Data::~Data(void)
{
}

std::string Data::getUser(void) const
{
    return this->_user;
}
int Data::getId(void) const
{
    return this->_id;
}

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

std::ostream& operator<<(std::ostream& os, const Data& data)
{
	os << "usuario: " << data.getUser() << std::endl << "id: " << data.getId(); 
	return (os);
}