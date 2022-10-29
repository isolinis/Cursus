/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 11:36:35 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/29 11:37:54 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define  C_HPP

#include "Base.hpp"

class C : public Base
{
public:

    C(void);
    C(const C& c);
    C& operator=(const C& c);
    virtual ~C(void);
};

#endif