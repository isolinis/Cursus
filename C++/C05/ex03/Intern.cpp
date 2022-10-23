/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:13:55 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/23 19:28:30 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
    std::cout << "Default intern constructor called." << std::endl;
}

Intern::Intern(const Intern &i)
{
    if (this == &i)
    {
    }
    std::cout << "Copy intern constructor called." << std::endl;
}

Intern &Intern::operator=(const Intern &i)
{
    if (this == &i)
    {
        return *this;
    }
    std::cout << "Intern assignation operator invoked." << std::endl;
    return *this;
}

Intern::~Intern(void)
{
    std::cout << "Intern destructor called." << std::endl;
}

AForm *Intern::makeForm(const std::string &aFormName, const std::string &aFormTarget)
{
    t_form forms[3];

    forms[0].formName = "shrubbery form";
    forms[0].fptr = &Intern::makeShrubberyCreationForm;
    forms[1].formName = "robotomy request";
    forms[1].fptr = &Intern::makeRobotomyRequestForm;
    forms[2].formName = "presidential pardon";
    forms[2].fptr = &Intern::makePresidentialPardonForm;

    for (int i = 0; i < 3; i++)
    {
        AForm *(Intern::*do_complain)(const std::string &aFormTarget) = forms[i].fptr;
        if (aFormName.compare(forms[i].formName) == 0)
        {
            std::cout << "Intern creates " << aFormName << "." << std::endl;
            return (this->*do_complain)(aFormTarget);
        }
    }
    std::cerr << "Form does not exist." << std::endl;
    return NULL;
}

AForm *Intern::makeShrubberyCreationForm(const std::string &aFormTarget)
{
    return new ShrubberyCreationForm(aFormTarget);
}

AForm *Intern::makeRobotomyRequestForm(const std::string &aFormTarget)
{
    return new RobotomyRequestForm(aFormTarget);
}

AForm *Intern::makePresidentialPardonForm(const std::string &aFormTarget)
{
    return new PresidentialPardonForm(aFormTarget);
}