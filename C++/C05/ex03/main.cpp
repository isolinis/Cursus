/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:12:45 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/23 19:16:16 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main(void)
{
        try
        {
                Bureaucrat highGradeBureaucrat = Bureaucrat("Aingeru", 1);
                Bureaucrat lowGradeBureaucrat = Bureaucrat("Papa", 150);
                Intern someRandomIntern;
                AForm *rrf;

                rrf = someRandomIntern.makeForm("robotomy request", "Bender");

                highGradeBureaucrat.signForm(*rrf);
                highGradeBureaucrat.executeForm(*rrf);
                highGradeBureaucrat.executeForm(*rrf);
                highGradeBureaucrat.executeForm(*rrf);
                highGradeBureaucrat.executeForm(*rrf);

                lowGradeBureaucrat.signForm(*rrf);
                lowGradeBureaucrat.executeForm(*rrf);
                lowGradeBureaucrat.executeForm(*rrf);
                lowGradeBureaucrat.executeForm(*rrf);
                lowGradeBureaucrat.executeForm(*rrf);
        }
        catch (const std::exception &e)
        {
                std::cerr << e.what() << std::endl;
        }
}