/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverseRotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taydogan <taydogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 20:09:14 by taydogan          #+#    #+#             */
/*   Updated: 2023/02/26 20:11:19 by taydogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void rra(stack *s)
{
    rotate(s->a,s->size_a,s->size_a -1);
    write(1,"rra\n",3);
}

void rrb(stack *s)
{
    rotate(s->b,s->size_b,s->size_b -1);
    write(1,"rrb\n",3);
}

void rrr(stack *s)
{
    rotate(s->a,s->size_a,s->size_a -1);
    rotate(s->b,s->size_b,s->size_b -1);
    write(1,"rrr\n",3); 
}