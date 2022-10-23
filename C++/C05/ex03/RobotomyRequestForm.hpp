/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:57:20 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/19 20:57:26 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:

    static bool robotomized;

public:

    class HasBeenRobotomizedException : public std::exception {
        public:
            virtual const char* what() const throw();
    };

    RobotomyRequestForm(void);
    RobotomyRequestForm(std::string aTarget);
    RobotomyRequestForm(const RobotomyRequestForm& rrf);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& rrf);
    ~RobotomyRequestForm(void);

    void doExecute(void) const;
    virtual void execute(const Bureaucrat& b) const;
};

#endif