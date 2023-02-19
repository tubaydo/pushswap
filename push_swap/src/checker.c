/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taydogan <taydogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:57:24 by taydogan          #+#    #+#             */
/*   Updated: 2023/02/19 18:57:12 by taydogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// "" İÇİNDE YAZILANLARIN HEPSİNİ İNT OLARAK ALMASINI SAĞLAYACAK OLAN FUNC


void error()
{
	write(1,"ERROR!\n", 7);
}

void isnt_int(int argc,char **argv)
{
	int i;
	int val;

	i = 1;
	while(i < argc)
	{
		val = ft_atoi(argv[i]);
		if (val == 0 && argv[i][0] != '0')
            error();
		i++;
	}
}

void isTheSame(int argc,char **argv)
{
	int num;
	int num2;
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		num = ft_atoi(argv[i]);
		while (j < argc)
		{
			num2 = ft_atoi(argv[j]);
			if(num == num2)
				error();
			j++;
		}
		i++;
	}
}

void intExceed(int argc,char **argv)
{
	int i;
	int num;

	i = 1;
	while(i < argc)
	{
		num = ft_atoi(argv[i]);
		if(num < -2147483648 || num < 2147483647)
			error();
		i++;
	}
}