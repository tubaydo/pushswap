/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taydogan <taydogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 00:49:09 by tubaaydogan       #+#    #+#             */
/*   Updated: 2023/03/14 21:01:07 by taydogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void pop_a(stack *s)
{
	if(s->size_a == -1)
		exit(1);
	else
	{
		s->a[s->size_a] = '\0';
		s->size_a--;
	}
	
}
void pop_b(stack *s)
{
	if(s->size_b == -1)
		exit(1);
	else
	{
		s->b[s->size_b] = '\0';
		s->size_b--;
	}
	
}
void pa(stack *s)
{
	s->size_a++;
	s->a[s->size_a] = s->b[s->size_b];
	pop_b(s);
	write(1,"pa\n",3);
}

void pb(stack *s)
{
	s->size_b++;
	s->b[s->size_b] = s->a[s->size_a];
	pop_a(s);
	write(1,"pb\n",3);
}

// void sa()
// {
// printf("a nın top %d\n",s->size_a);
// 	printf("b nın top %d\n",s->size_b);
// 	s->b[s->size_b] = s->a[s->size_a];
// 	s->size_a--;
// 	s->size_b++;
// 	printf("b nın top elemanı %d\n",s->b[-1]);
// 	write(1,"pb\n",3);
	
// } 
// void pb(stack *s,int c,int argc)
// {
// 	if(s->size_b == argc -1)
// 		exit(1);
// 	else
// 	{
// 		s->size_b++;
// 		s->b[s->size_b] = c;
// 	}
// 	pop_a(s);
// 	write(1,"pb\n",3);
// }