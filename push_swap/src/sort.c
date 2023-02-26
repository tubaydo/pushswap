/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaaydogan <tubaaydogan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 00:49:09 by tubaaydogan       #+#    #+#             */
/*   Updated: 2023/02/26 15:30:08 by tubaaydogan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void pa(stack s)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while(a < s.size_a-1)
	{	if(s.a[a] == 0)
			break;
		a++;
	}
	printf("%d\n",a);
	while(b < s.size_b -1)
	{	if(s.b[b] == 0)
			break;
		b++;
	}
	printf("%d\n",b);
	s.a[a] = s.b[b];
	printf("%d\n",s.a[a]);
	write(1,"pa\n",3);
}

void pb(stack *s)
{
	printf("a nın top %d\n",s->size_a);
	printf("b nın top %d\n",s->size_b);
	s->b[s->size_b] = s->a[s->size_a];
	s->size_a--;
	s->size_b++;
	printf("b nın top elemanı %d\n",s->b[-1]);
	write(1,"pb\n",3);
}
void sa()
{

	
}
