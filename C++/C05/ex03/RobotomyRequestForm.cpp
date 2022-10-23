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

bool RobotomyRequestForm::robotomized = true;

const char* RobotomyRequestForm::HasBeenRobotomizedException::what() const throw()
{
    return ("A failure occurred whilst trying to robotomize!");
}

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

void RobotomyRequestForm::execute(const Bureaucrat& b) const
{
    try
    {
        if (this->getSigned() == false) {
            AForm::FormNotSignedException notSignedForm;
            throw notSignedForm;
        } else if (this->getGradeToExecute() < b.getGrade()) {
            GradeTooLowException gradeTooLow;
            throw gradeTooLow;
        } else if (!robotomized) {
            HasBeenRobotomizedException alreadyRobotomizedOnce;
            throw alreadyRobotomizedOnce;
        } else {
            this->doExecute();
        }
    }
    catch (const RobotomyRequestForm::HasBeenRobotomizedException& h)
    {
        robotomized = !robotomized;
        std::cerr << h.what() << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void RobotomyRequestForm::doExecute(void) const
{
    robotomized = !robotomized;
    std::cout << "\a" << "\a" << "\a" << this->getTarget() << " has been robotomized successfully!" << std::endl;
}