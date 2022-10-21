/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:29:03 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/19 19:29:06 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
public:

    ShrubberyCreationForm(void);
    ShrubberyCreationForm(std::string aTarget);
    ShrubberyCreationForm(const ShrubberyCreationForm& scf);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& scf);
    ~ShrubberyCreationForm(void);

    virtual void executeForm() const;
};

#endif