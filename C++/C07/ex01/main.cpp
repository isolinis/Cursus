/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 20:57:17 by jsolinis          #+#    #+#             */
/*   Updated: 2022/10/30 01:42:02 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main (void)
{
    int intArr[] = {8, 4, 12, 6};
    char charArr[] = {'a', 'p', 'p', 'l', 'e'};
    std::string strArr[] = {"42", "is", "the", "meaning", "of", "life"};

    iter(intArr, 4, display);
    iter(charArr, 5, display);
    iter(strArr, 6, display);

    iter(intArr, 4, addOne);
    iter(charArr, 5, addOne);
    iter(strArr, 6, addOne);
    return(0);
}
