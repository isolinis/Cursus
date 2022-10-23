/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 21:06:48 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/19 21:06:49 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
public:

    PresidentialPardonForm(void);
    PresidentialPardonForm(std::string aTarget);
    PresidentialPardonForm(const PresidentialPardonForm& rrf);
    PresidentialPardonForm& operator=(const PresidentialPardonForm& rrf);
    ~PresidentialPardonForm(void);

    void doExecute(void) const;
    virtual void execute(const Bureaucrat& b) const;
};

#endif