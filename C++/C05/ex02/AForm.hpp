/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:32:23 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/20 11:32:23 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>

class Bureaucrat;
class AForm
{
private:

    const std::string _name;
    const int _gradeToSign;
    const int _gradeToExecute;
    bool _signed;
    std::string _target;
    class GradeTooHighException : public std::exception {
        virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
        virtual const char* what() const throw();
    };
    class FormNotSignedException : public std::exception {
        virtual const char* what() const throw();
    };

public:

    AForm(void);
    AForm(const std::string aName, const int aGradeToSign, const int aGradeToExecute);
    AForm(const AForm& f);
    AForm& operator=(const AForm& f);
    virtual ~AForm(void);

    const std::string getName(void) const;
    int getGradeToSign(void) const;
    int getGradeToExecute(void) const;
    void setSigned(void);
    bool getSigned(void) const;
    void setTarget(std::string aTarget);
    std::string getTarget(void) const;

    void beSigned(const Bureaucrat& b);
    void execute(Bureaucrat const& executor) const;
    virtual void executeForm() const = 0;
};

std::ostream& operator<<(std::ostream& os, const AForm& f);

#endif
