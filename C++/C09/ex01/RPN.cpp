/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 00:38:57 by jsolinis          #+#    #+#             */
/*   Updated: 2023/07/31 03:31:35 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

const char *RPN::InvalidArguments::what() const throw()
{
    return "expected 1 argument but got ";
}

const char *RPN::InvalidInput::what() const throw()
{
    return "invalid input. Try again using only [1-9] or [+-*/].";
}

const char *RPN::InvalidFormat::what() const throw()
{
    return "invalid format. There must be a space between operands & operators.";
}

const char *RPN::InvalidInputCharacters::what() const throw()
{
    return "invalid input. There must be at least 2 operands & 1 operator.";
}

const char *RPN::InvalidOperation::what() const throw()
{
    return "incorrect operand/operator position.";
}

RPN::RPN(void)
{
}

RPN::RPN(int argc, std::string input)
{
    if (argc != 2 || input == "")
	{
        InvalidArguments ia;
        throw ia;
    }
}

RPN::RPN(const RPN& rpn)
{
    this->_operands = rpn._operands;
}

RPN &RPN::operator=(const RPN &rpn)
{
    this->_operands = rpn._operands;
    return *this;
}

RPN::~RPN(void)
{
}

std::string RPN::validateInput(std::string input) const
{
    std::string::iterator it = input.begin();
    std::stringstream ss(input);
    std::string token;
    int operand = 0, operando = 0;

    if (!isdigit(input.at(0)) && !isspace(input.at(0)))
    {
        InvalidOperation io;
        throw io;
    }
    if (input.length() < 5)
    {
        InvalidInputCharacters iic;
        throw iic;
    }
    while (it != input.end())
    {
        if (!isdigit(*it) && *it != '+' && *it != '-' && *it != '*' && *it != '/' && *it != ' ')
        {
            InvalidInput ii;
            throw ii;
        }
        it++;
    }
    while (ss >> token) {
        if (token.length() > 1)
        {
            InvalidFormat ifor;
            throw ifor;
        }
        if (isdigit(token[0]))
            operand++;
        else
            operando++;
    }
    if (operand < 2 || operando < 1)
    {
        InvalidInputCharacters iic;
        throw iic;
    }
    return input;
}

int RPN::evaluate_polish_expression(std::string input) {
    std::stringstream ss1, ss(input);

    std::string token;
    while (ss >> token) {
        if (isdigit(token[0])) {
            this->_operands.push(token[0] - '0');
        } else {
            int operand2 = this->_operands.top();
            this->_operands.pop();
            if (this->_operands.empty())
            {
                InvalidOperation io;
                throw io;
            }
            int operand1 = this->_operands.top();
            this->_operands.pop();
            switch (token[0]) {
                case '+':
                    this->_operands.push(operand1 + operand2);
                    break;
                case '-':
                    this->_operands.push(operand1 - operand2);
                    break;
                case '*':
                    this->_operands.push(operand1 * operand2);
                    break;
                case '/':
                    this->_operands.push(operand1 / operand2);
                    break;
            }
        }
    }
    return this->_operands.top();
}