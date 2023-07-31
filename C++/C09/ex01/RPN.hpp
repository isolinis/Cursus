/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 00:39:00 by jsolinis          #+#    #+#             */
/*   Updated: 2023/07/31 03:19:28 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <stack>
#include <iterator>
#include <algorithm>

class RPN {

private:

    std::stack<int> _operands;
    class InvalidArguments : public std::exception
    {
        virtual const char* what() const throw();
    };
    class InvalidInput : public std::exception
    {
        virtual const char* what() const throw();
    };
    class InvalidFormat : public std::exception
    {
        virtual const char* what() const throw();
    };
    class InvalidInputCharacters : public std::exception
    {
        virtual const char* what() const throw();
    };
    class InvalidOperation : public std::exception
    {
        virtual const char* what() const throw();
    };
    RPN(void);
    RPN(const RPN& rpn);
    RPN& operator=(const RPN& rpn);

public:
    RPN(int argc, std::string input);
    ~RPN(void);

    std::string    validateInput(std::string input) const;
    int            evaluate_polish_expression(std::string input);
};

#endif