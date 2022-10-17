/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 19:28:27 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/14 19:28:28 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Form grade cannot be higher than 1.");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Form grade cannot be lower than 150.");
}

Form::Form(void) : _name("undefined"), _gradeToSign(150), _gradeToExecute(150), _signed(false)
{
    std::cout << "Default form constructor called." << std::endl;
}

Form::Form(const std::string aName, const int aGradeToSign, const int aGradeToExecute)
try : _name(aName), _gradeToSign(aGradeToSign), _gradeToExecute(aGradeToExecute), _signed(false)
{
    if (aGradeToSign < 1 || aGradeToExecute < 1)
    {
        GradeTooHighException th;
        throw th;
    }
    else if (aGradeToSign > 150 || aGradeToExecute > 150)
    {
        GradeTooLowException tl;
        throw tl;
    }
    else
    {
        std::cout << "Name & grade form constructor called." << std::endl;
    }
}
catch (const std::exception &e)
{
    std::cerr << e.what() << std::endl;
}

Form::Form(const Form &f) : _name(f._name), _gradeToSign(f._gradeToSign), _gradeToExecute(f._gradeToExecute), _signed(f._signed)
{
    std::cout << "Copy form constructor called." << std::endl;
}

Form &Form::operator=(const Form &f)
{
    std::cerr << "Form " << f.getName() << " cannot be assigned to another." << std::endl;
    return (*this);
}

Form::~Form(void)
{
    std::cout << "Form destructor called." << std::endl;
}

const std::string Form::getName(void) const
{
    return (this->_name);
}

int Form::getGradeToSign(void) const
{
    return (this->_gradeToSign);
}

int Form::getGradeToExecute(void) const
{
    return (this->_gradeToExecute);
}

void Form::setSigned(void)
{
    this->_signed = true;
}

bool Form::getSigned(void) const
{
    return (this->_signed);
}

void Form::beSigned(const Bureaucrat &b)
{
    int diffGradesForSigning = this->getGradeToSign() - b.getGrade();
    b.signForm(*this, diffGradesForSigning);
}

std::ostream &operator<<(std::ostream &os, const Form &f)
{
    os << f.getName() << " form; signable by bureaucrat of grade " << f.getGradeToSign()
       << " & to be executed by bureaucrat of grade " << f.getGradeToExecute() << std::endl;
    return (os);
}