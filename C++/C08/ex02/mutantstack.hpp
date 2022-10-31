/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:56:45 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/31 14:31:22 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:

    MutantStack(void);
    MutantStack(const MutantStack& ms);
    MutantStack<T>& operator=(const MutantStack& ms);
    ~MutantStack(void);

    typedef typename MutantStack<T>::container_type::iterator iterator;
    typedef typename MutantStack<T>::container_type::const_iterator const_iterator;
    typedef typename MutantStack<T>::container_type::reverse_iterator reverse_iterator;
    typedef typename MutantStack<T>::container_type::const_reverse_iterator const_reverse_iterator;

    iterator begin(void);
    iterator end(void);
    const_iterator cbegin(void);
    const_iterator cend(void);
    reverse_iterator rbegin(void);
    reverse_iterator rend(void);
    const_reverse_iterator crbegin(void);
    const_reverse_iterator crend(void);
};

#endif
