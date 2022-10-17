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

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Bureaucrat grade cannot be higher than 1.");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Bureaucrat grade cannot be lower than 150.");
}

Bureaucrat::Bureaucrat(void) : _name("undefined"), _grade(150)
{
    std::cout << "Default bureaucrat constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(const std::string aName, int aGrade) try : _name(aName), _grade(aGrade)
{
    if (this->getGrade() < 1)
    {
        GradeTooHighException th;
        throw th;
    }
    else if (this->getGrade() > 150)
    {
        GradeTooLowException tl;
        throw tl;
    }
    else
    {
        std::cout << "Name & grade bureaucrat constructor called." << std::endl;
    }
}
catch (const std::exception &e)
{
    std::cerr << e.what() << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &b) : _name(b._name)
{
    this->_grade = b.getGrade();
    std::cout << "Copy bureaucrat constructor called." << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &b)
{
    std::cerr << "Cannot assign " << b.getName() << "; Bureaucrats are not made; they are created!!" << std::endl;
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
    try
    {
        if (this->_grade - 1 < 1)
        {
            GradeTooHighException th;
            throw th;
        }
        else
        {
            this->_grade--;
        }
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void Bureaucrat::decrement(void)
{
    try
    {
        if (this->_grade + 1 > 150)
        {
            GradeTooLowException tl;
            throw tl;
        }
        else
        {
            this->_grade++;
        }
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b)
{
    os << b.getName() << ", bureaucrat grade " << b.getGrade();
    return (os);
}