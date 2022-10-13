/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:47:47 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/13 19:47:49 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("undefined"), _grade(150)
{
    std::cout << "Default bureaucrat constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(const std::string aName) : _name(aName), _grade(150)
{
    std::cout << "Default bureaucrat constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& b) : _name(b._name)
{
    this->_grade = b.getGrade();
    std::cout << "Copy bureaucrat constructor called." << std::endl;

}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& b)
{
    if (this != &b)
    {
        //TODO : create an exception as _name attribute is constant
        this->_grade = b.getGrade();
    }
    std::cout << "Bureaucrat assignation operator called." << std::endl;
    return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Bureaucrat destructor called." << std::endl;
}

const std::string Bureaucrat::getName(void) const
{
    return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
    return (this->_grade);
}

void Bureaucrat::increment(void)
{
    //TODO: must catch GradeTooHighException & GradeTooLowException once exceptions are created
}

void Bureaucrat::decrement(void)
{
    //TODO: must catch GradeTooHighException & GradeTooLowException once exceptions are created
}