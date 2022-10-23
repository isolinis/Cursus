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
        Bureaucrat highGradeBureaucrat = Bureaucrat("Aingeru", 1);
        Bureaucrat lowGradeBureaucrat = Bureaucrat("Papa", 150);

/*
        std::cout << "========================SHRUBBERYCREATIONFORM-EXECUTION=========================" << std::endl;

        AForm *f0 = new ShrubberyCreationForm("Home");

        highGradeBureaucrat.signForm(*f0);
        highGradeBureaucrat.executeForm(*f0);

        std::cout << "========================SHRUBBERYCREATIONFORM-EXCEPTION=========================" << std::endl;

        lowGradeBureaucrat.signForm(*f0);
        lowGradeBureaucrat.executeForm(*f0);

        delete(f0);

*/
        std::cout << "========================ROBOTOMYREQUESTFORM-EXECUTION=========================" << std::endl;

        AForm *f1 = new RobotomyRequestForm("R2D2");

        highGradeBureaucrat.signForm(*f1);
        highGradeBureaucrat.executeForm(*f1);
        highGradeBureaucrat.executeForm(*f1);
        highGradeBureaucrat.executeForm(*f1);
        highGradeBureaucrat.executeForm(*f1);

        std::cout << "========================ROBOTOMYREQUESTFORM-EXCEPTION=========================" << std::endl;

        lowGradeBureaucrat.signForm(*f1);
        lowGradeBureaucrat.executeForm(*f1);
        lowGradeBureaucrat.executeForm(*f1);
        lowGradeBureaucrat.executeForm(*f1);
        lowGradeBureaucrat.executeForm(*f1);

        delete(f1);

/*
        std::cout << "========================PRESIDENTIALPARDONFORM-EXECUTION=========================" << std::endl;

        AForm *f2 = new PresidentialPardonForm("Arthur Dent");

        highGradeBureaucrat.signForm(*f2);
        highGradeBureaucrat.executeForm(*f2);

        std::cout << "========================PRESIDENTIALPARDONFORM-EXCEPTION=========================" << std::endl;
        
        lowGradeBureaucrat.signForm(*f2);
        lowGradeBureaucrat.executeForm(*f2);

        delete(f2);
*/
    }
    catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
}