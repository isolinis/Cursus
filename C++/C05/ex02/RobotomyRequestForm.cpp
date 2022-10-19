/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:57:07 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/19 20:57:10 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("undefined", 72, 45)
{
    setTarget("undefined");
    std::cout << "RobotomyRequest form default constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string aTarget) : AForm("RobotomyRequest", 72, 45)
{
    setTarget(aTarget);
    std::cout << "RobotomyRequest form parameterized constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& scf) : AForm(scf)
{
    setTarget(scf.getTarget());
    std::cout << "RobotomyRequest form copy constructor called." << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &scf)
{
    std::cerr << "RobotomyRequestForm " << scf.getName() << " cannot be assigned to another." << std::endl;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    std::cout << "RobotomyRequestForm destructor called." << std::endl;
}