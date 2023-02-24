/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaaydogan <tubaaydogan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:57:24 by taydogan          #+#    #+#             */
/*   Updated: 2023/02/24 19:32:48 by tubaaydogan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// "" İÇİNDE YAZILANLARIN HEPSİNİ İNT OLARAK ALMASINI SAĞLAYACAK OLAN FUNC
    int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

    long long	ft_atoi(const char *str)
{
	long long int	number;
	int				sign;

	number = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (ft_isdigit(*str))
	{
		number = (number * 10) + (*str - '0') * sign;
		str++;
	}
	return (number);
}
int *makeArr(int size,char **arr)
{
    int *new_array;
    int i;
    int t;

    i = 0;
    t = size -1;
    new_array = malloc(size * sizeof(int));
    if(!new_array)
        return(0);
    while(i <= size -1)
    {
        new_array[i] = ft_atoi(arr[t]);
        t--;
        i++;
    }
    return(new_array);
}
void pushSwap(int argc, int *arr)
{
    stack s;
    int size;
    int i;
    int t;

    i = 0;
    size = argc;
    if(!arr)
        return;
    t = size -1;
    s.a = malloc(size * sizeof(int));
    if(!s.a)
        return;
    s.size_a = size;
    s.b = malloc(size * sizeof(int));
    if(!s.b)
    {
        free(s.a);
        return;
    }
    s.size_b = size;
    // dizinin son elemanını stackın ilk elemanı haline getiriyoruz
    while(i < size)
    {
        s.a[i] = arr[t];
        i++;
        t--;
    }
    printf("%d\n",s.a[0]);
    printf("%d",s.a[1]);
}


int main(int argc, char **argv)
{
    int *arr;

    argv++;
    isnt_int(argc,argv);
    isTheSame(argc,argv);
    intExceed(argc,argv);
    if(argc > 1)
    {
        arr = makeArr(argc-1,argv);
        pushSwap(argc-1,arr);
    }
    else
        error();
}
