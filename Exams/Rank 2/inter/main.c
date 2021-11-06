/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 10:41:48 by jsolinis          #+#    #+#             */
/*   Updated: 2021/10/06 16:33:23 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inter.c"

int main(void)
{
	char	*s1;
	char	*s2;
	//char	*s3;
	//char	*s4;
	//char	*s5;
	//char	*s6;

	s1 = "padinton";
	s2 = "paqefwtdjetyiytjneytjoeyjnejeyj";
	//s3 = "ddf6vewg64f";
	//s4 = "gtwthgdwthdwfteewhrtag6h4ffdhsd";
	//s5 = "algo";
	//s6 = "no crea que esta frase esconde algo";
	inter(s1, s2);
	//inter(s3);
	//inter(s5);
	return(0);
}
