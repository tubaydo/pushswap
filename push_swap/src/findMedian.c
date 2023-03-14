/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findMedian.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taydogan <taydogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 17:07:55 by taydogan          #+#    #+#             */
/*   Updated: 2023/02/28 18:56:12 by taydogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/push_swap.h"

int *sum(int s[],int size)
{
    int i;
    int j;
    int sum;
    int p[size];

    i = 0;
    j = 0;
    sum = 0;
    while(s)
    {
        sum = sum + s[i];
        i++;
    }
    i = 0; 
    sum = sum/size;
    while(s)
    {
        if(s[i] > sum)
        {
            p[j] = s[i];
            i++;
            j++;
        }
    }
   return(p);
}

int medianİndex(int s[],int size)
{
    int i;
    int j;
    int min;
    int *p;
    
    i = 0;
    p = sum(s,size);
    min = p[i];
    while(p)
    {
        i++;
       if(min > p[i])
            min = p[i];
    }
    return(i);
}