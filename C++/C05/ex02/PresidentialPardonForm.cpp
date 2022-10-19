/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 21:06:33 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/19 21:06:36 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("undefined", 25, 5)
{
    setTarget("undefined");
    std::cout << "PresidentialPardon form default constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string aTarget) : AForm("PresidentialPardon", 145, 137)
{
    setTarget(aTarget);
    std::cout << "PresidentialPardon form parameterized constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& scf) : AForm(scf)
{
    setTarget(scf.getTarget());
    std::cout << "PresidentialPardon form copy constructor called." << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &scf)
{
    std::cerr << "PresidentialPardonForm " << scf.getName() << " cannot be assigned to another." << std::endl;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    std::cout << "PresidentialPardonForm destructor called." << std::endl;
}