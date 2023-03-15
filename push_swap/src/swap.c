/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taydogan <taydogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:54:16 by taydogan          #+#    #+#             */
/*   Updated: 2023/02/26 18:10:23 by taydogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void sa(stack *s)
{
    int tmp;
    
    tmp = s->a[s->size_a];
    s->a[s->size_a] = s->a[s->size_a -1];
    s->a[s->size_a - 1] = tmp;
    write(1,"sa\n",3);
}

void sb(stack *s)
{
    int tmp;

    tmp = s->b[s->size_b];
    s->b[s->size_b] = s->b[s->size_b-1];
    s->b[s->size_b - 1] = tmp;
    write(1,"sb\n",3);
}

void ss(stack *s)
{
    int tmp;
    
    tmp = s->a[s->size_a];
    s->a[s->size_a] = s->a[s->size_a -1];
    s->a[s->size_a - 1] = tmp;
    tmp = 0;
    tmp = s->b[s->size_b];
    s->b[s->size_b] = s->b[s->size_b-1];
    s->b[s->size_b - 1] = tmp;
    write(1,"ss\n",3);
}