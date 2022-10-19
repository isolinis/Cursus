/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:28:52 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/19 19:28:55 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("undefined", 145, 137)
{
    setTarget("undefined");
    std::cout << "ShrubberyCreation form default constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string aTarget) : AForm("ShrubberyCreation", 145, 137)
{
    setTarget(aTarget);
    std::cout << "ShrubberyCreation form parameterized constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& scf) : AForm(scf)
{
    setTarget(scf.getTarget());
    std::cout << "ShrubberyCreation form copy constructor called." << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &scf)
{
    std::cerr << "ShrubberyCreationForm " << scf.getName() << " cannot be assigned to another." << std::endl;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    std::cout << "ShrubberyCreationForm destructor called." << std::endl;
}