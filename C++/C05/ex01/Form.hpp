/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 19:28:19 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/14 19:28:21 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Form
{
private:

    const std::string _name;
    const int _gradeToSign;
    const int _gradeToExecute;
    bool _signed;
    class GradeTooHighException : public std::exception {
        virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
        virtual const char* what() const throw();
    };

public:

    Form(void);
    Form(const std::string aName, const int aGradeToSign, const int aGradeToExecute);
    Form(const Form& f);
    Form& operator=(const Form& f);
    ~Form(void);

    const std::string getName(void) const;
    const int getGradeToSign(void) const;
    const int getGradeToExecute(void) const;
    bool getSigned(void) const;

    void beSigned(const Bureaucrat& b);
};

std::ostream& operator<<(std::ostream& os, const Form& f);

#endif
