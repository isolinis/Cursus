/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:12:45 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/13 21:12:49 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void) {
    try {
        AForm *f = new ShrubberyCreationForm("home");
        Bureaucrat b = Bureaucrat("Aingeru", 1);

        b.signForm(*f, f->getGradeToSign() - b.getGrade());
        b.executeForm(*f);
        delete(f);
    }
    catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
   /*  AForm *f[3];
    f[0] = new ShrubberyCreationForm("home");
    f[1] = new PresidentialPardonForm("Aingeru's mime");
    f[2] = new RobotomyRequestForm("Your ass");

    size_t i = ~0ULL;
    while (3 > ++i) {
        try {
            Bureaucrat b = Bureaucrat("Barby", 1);
            b.signForm(*f[i], f[i]->getGradeToSign() - b.getGrade());
            b.executeForm(*f[i]);
        } catch (const std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    } */
}