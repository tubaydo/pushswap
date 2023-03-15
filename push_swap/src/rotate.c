/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taydogan <taydogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:13:06 by taydogan          #+#    #+#             */
/*   Updated: 2023/03/14 17:49:23 by taydogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void reverse(int* arr, int i, int j)
{
    int temp;
    while (i < j){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

void rotate(int* nums, int numsSize, int k)
{
    k = k % numsSize;
    
    if (k == 0 || numsSize == 1)
        return; 
    reverse(nums, 0, numsSize-1); 
    reverse(nums, 0, k-1); 
    reverse(nums, k, numsSize-1);
    return ;
}

void ra(stack *s)
{   
    rotate(s->a,s->size_a + 1,1);
    write(1,"ra\n",3);
}

void rb(stack *s)
{
    rotate(s->b,s->size_b + 1,1);
    write(1,"rb\n",3);
}

void rr(stack *s)
{
    rotate(s->a,s->size_a + 1,1);
    rotate(s->b,s->size_b + 1,1);
    write(1,"rr\n",3);
}