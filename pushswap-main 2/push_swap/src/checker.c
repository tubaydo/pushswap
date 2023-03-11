/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaaydogan <tubaaydogan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 20:19:42 by tubaaydogan       #+#    #+#             */
/*   Updated: 2023/02/25 22:33:15 by tubaaydogan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int error()
{
	write(1,"error\n", 6);
	exit(1);
}
void isnt_int(int argc,char **argv)
{
	int i;
	int  val;
	
	i = 0;
	while(i < argc-1)
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

	i = 0;
	while (i < argc-1)
	{
		j = i + 1;
		num = ft_atoi(argv[i]);
		while (j < argc-1)
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
	long long num;

	i = 0;
	while(i < argc-1)
	{
		num = ft_atoi(argv[i]);
		if(num < -2147483648 || num > 2147483647)
			error();
			i++;
	}
}