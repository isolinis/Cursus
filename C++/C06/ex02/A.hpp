/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 11:32:56 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/29 11:38:03 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define  A_HPP

#include "Base.hpp"

class A : public Base
{
public:

    A(void);
    A(const A& a);
    A& operator=(const A& a);
    virtual ~A(void);
};

#endif