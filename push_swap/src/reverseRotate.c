/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverseRotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaaydogan <tubaaydogan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 20:09:14 by taydogan          #+#    #+#             */
/*   Updated: 2023/02/27 00:13:06 by tubaaydogan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void rra(stack *s)
{
    printf("size_a = %d\n",s->size_a);
    rotate(s->a,s->size_a + 1,s->size_a);
    write(1,"rra\n",4);
}

void rrb(stack *s)
{
    rotate(s->b,s->size_b + 1,s->size_b);
    write(1,"rrb\n",4);
}

void rrr(stack *s)
{
    rotate(s->a,s->size_a + 1 ,s->size_a);
    rotate(s->b,s->size_b + 1,s->size_b);
    write(1,"rrr\n",4); 
}