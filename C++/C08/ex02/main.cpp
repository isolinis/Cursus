/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:58:57 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/31 14:49:16 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list>
#include "mutantstack.cpp"

int main(void)
{
    MutantStack<int> mstack;
    std::cout << "========MUTANSTACK ITERATOR======" << std::endl;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);

    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << "========MUTANSTACK CONST ITERATOR======" << std::endl;
    MutantStack<int> cmstack;
    cmstack.push(5);
    cmstack.push(17);
    std::cout << cmstack.top() << std::endl;
    cmstack.pop();
    std::cout << cmstack.size() << std::endl;
    cmstack.push(3);
    cmstack.push(5);
    cmstack.push(737);

    cmstack.push(0);
    MutantStack<int>::const_iterator cit = cmstack.cbegin();
    MutantStack<int>::const_iterator cite = cmstack.cend();
    ++cit;
    --cit;
    while (cit != cite)
    {
        std::cout << *cit << std::endl;
        ++cit;
    }
    MutantStack<int> rmstack;
    std::cout << "========MUTANSTACK REVERSE ITERATOR======" << std::endl;
    rmstack.push(5);
    rmstack.push(17);
    std::cout << rmstack.top() << std::endl;
    rmstack.pop();
    std::cout << rmstack.size() << std::endl;
    rmstack.push(3);
    rmstack.push(5);
    rmstack.push(737);

    rmstack.push(0);
    MutantStack<int>::reverse_iterator rit = rmstack.rbegin();
    MutantStack<int>::reverse_iterator rite = rmstack.rend();
    ++rit;
    --rit;
    while (rit != rite)
    {
        std::cout << *rit << std::endl;
        ++rit;
    }
    std::cout << "========MUTANSTACK CONST REVERSE ITERATOR======" << std::endl;
    MutantStack<int> rcmstack;
    rcmstack.push(5);
    rcmstack.push(17);
    std::cout << rcmstack.top() << std::endl;
    rcmstack.pop();
    std::cout << rcmstack.size() << std::endl;
    rcmstack.push(3);
    rcmstack.push(5);
    rcmstack.push(737);

    rcmstack.push(0);
    MutantStack<int>::const_reverse_iterator rcit = rcmstack.crbegin();
    MutantStack<int>::const_reverse_iterator rcite = rcmstack.crend();
    ++rcit;
    --rcit;
    while (rcit != rcite)
    {
        std::cout << *rcit << std::endl;
        ++rcit;
    }
    std::stack<int> s(mstack);

    std::list<int> lstack;
    std::cout << "========LIST ITERATOR======" << std::endl;
    lstack.push_back(5);
    lstack.push_back(17);
    std::cout << lstack.back() << std::endl;
    lstack.pop_back();
    std::cout << lstack.size() << std::endl;
    lstack.push_back(3);
    lstack.push_back(5);
    lstack.push_back(737);

    lstack.push_back(0);
    std::list<int>::iterator lit = lstack.begin();
    std::list<int>::iterator lite = lstack.end();
    ++lit;
    --lit;
    while (lit != lite)
    {
        std::cout << *lit << std::endl;
        ++lit;
    }
    std::cout << "========LIST CONST ITERATOR======" << std::endl;
    std::list<int> clstack;
    clstack.push_back(5);
    clstack.push_back(17);
    std::cout << clstack.back() << std::endl;
    clstack.pop_back();
    std::cout << clstack.size() << std::endl;
    clstack.push_back(3);
    clstack.push_back(5);
    clstack.push_back(737);

    clstack.push_back(0);
    std::list<int>::const_iterator clit = clstack.cbegin();
    std::list<int>::const_iterator clite = clstack.cend();
    ++clit;
    --clit;
    while (clit != clite)
    {
        std::cout << *clit << std::endl;
        ++clit;
    }
    std::list<int> rlstack;
    std::cout << "========LIST REVERSE ITERATOR======" << std::endl;
    rlstack.push_back(5);
    rlstack.push_back(17);
    std::cout << rlstack.back() << std::endl;
    rlstack.pop_back();
    std::cout << rlstack.size() << std::endl;
    rlstack.push_back(3);
    rlstack.push_back(5);
    rlstack.push_back(737);

    rlstack.push_back(0);
    std::list<int>::reverse_iterator rlit = rlstack.rbegin();
    std::list<int>::reverse_iterator rlite = rlstack.rend();
    ++rlit;
    --rlit;
    while (rlit != rlite)
    {
        std::cout << *rlit << std::endl;
        ++rlit;
    }
    std::cout << "========LIST CONST REVERSE ITERATOR======" << std::endl;
    std::list<int> rclstack;
    rclstack.push_back(5);
    rclstack.push_back(17);
    std::cout << rclstack.back() << std::endl;
    rclstack.pop_back();
    std::cout << rclstack.size() << std::endl;
    rclstack.push_back(3);
    rclstack.push_back(5);
    rclstack.push_back(737);

    rclstack.push_back(0);
    std::list<int>::const_reverse_iterator rclit = rclstack.crbegin();
    std::list<int>::const_reverse_iterator rclite = rclstack.crend();
    ++rclit;
    --rclit;
    while (rclit != rclite)
    {
        std::cout << *rclit << std::endl;
        ++rclit;
    }
    return 0;
}
