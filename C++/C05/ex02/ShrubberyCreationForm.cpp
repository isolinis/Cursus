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

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &scf) : AForm(scf)
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

void ShrubberyCreationForm::executeForm() const
{
    std::ofstream os(this->getName() + "_shrubbery");

    if (os.is_open())
    {
        os << "            ,@@@@@@@," << std::endl;
        os << "   ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
        os << ",&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
        os << ",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
        os << "%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
        os << "%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
        os << "`&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
        os << "    |o|        | |         | |" << std::endl;
        os << "    |.|        | |         | |" << std::endl;
        os << " \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
    }
}