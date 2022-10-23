/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:13:49 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/23 19:15:26 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
    Intern(void);
    Intern(const Intern &i);
    Intern &operator=(const Intern &i);
    ~Intern(void);

    AForm *makeForm(const std::string &aFormName, const std::string &aFormTarget);
    AForm *makeShrubberyCreationForm(const std::string &aFormTarget);
    AForm *makeRobotomyRequestForm(const std::string &aFormTarget);
    AForm *makePresidentialPardonForm(const std::string &aFormTarget);
};

typedef struct s_form
{
    std::string formName;
    AForm* (Intern::*fptr)(const std::string &aFormTarget);
} t_form;

#endif