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
public:

    RobotomyRequestForm(void);
    RobotomyRequestForm(std::string aTarget);
    RobotomyRequestForm(const RobotomyRequestForm& rrf);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& rrf);
    ~RobotomyRequestForm(void);
};

#endif