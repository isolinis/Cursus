/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:47:37 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/13 19:47:39 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:

    const std::string _name;
    int _grade;
    class GradeTooHighException : public std::exception {
        virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
        virtual const char* what() const throw();
    };

public:

    Bureaucrat(void);
    Bureaucrat(const std::string aName, int aGrade);
    Bureaucrat(const Bureaucrat& b);
    Bureaucrat& operator=(const Bureaucrat& b);
    ~Bureaucrat(void);

    const std::string getName(void) const;
    int getGrade(void) const;
    void increment(void);
    void decrement (void);
    void signForm(void)
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif