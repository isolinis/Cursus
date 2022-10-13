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

public:

    Bureaucrat(void);
    Bureaucrat(const std::string aName);
    Bureaucrat(const Bureaucrat& b);
    Bureaucrat& operator=(const Bureaucrat& b);
    ~Bureaucrat(void);

    const std::string getName(void) const;
    int getGrade(void) const;
    void increment(void);
    void decrement (void);
};

#endif