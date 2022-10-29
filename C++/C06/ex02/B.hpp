/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 11:35:38 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/29 11:36:15 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef B_HPP
# define  B_HPP

#include "Base.hpp"

class B : public Base
{
public:

    B(void);
    B(const B& b);
    B& operator=(const B& b);
    virtual ~B(void);
};

#endif