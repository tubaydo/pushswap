/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pivot.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taydogan <taydogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:07:57 by taydogan          #+#    #+#             */
/*   Updated: 2023/03/11 21:32:25 by taydogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void uptoindex(stack *s,int pivotindex)
{
    int stacksize;

    stacksize = s->size_a;
    pushSwap(stacksize-pivotindex,s->a);
    while(stacksize >= pivotindex)
    {
        pb(s);
        stacksize--;
    }
}
void sa_ctrl(stack *s)
{
    if(s->a[s->size_a] > s->a[s->size_a-1])
        sa(s);
    else
        return;
}
void basecase_2a(stack *s)
{
    if(s->a[s->size_a] > s->a[s->size_a-1])
        return;
    else
        sa(s);
}
void basecase_2b(stack *s)
{
    if(s->a[s->size_b] > s->a[s->size_b-1])
        return;
    else
        sa(s);
}
int unsorted_a(int *s,int c)
{
    while(c >= 0)
    {
        if(s[c] > s[c - 1])
            return(1);
        c--;
    } 
   return(0);
}
int unsorted_b(int *s,int c)
{
    while(c >= 0)
    {
        if(s[c] < s[c - 1])
            return(1);
        c--;
    } 
   return(0);
}
void quicksort(stack *s,int argc)
{
    int pivotindex;

    pivotindex = (s->size_a+1)/2;
    sa_ctrl(s);
    if (unsorted_a(s->a,s->size_a) || unsorted_b(s->b,s->size_b))
        uptoindex(s,pivotindex);
    printf("x\n");
    if(s->size_a <= 1)
    {
        // if(s->size_a == 1)

            basecase_2a(s);
              printf("size_a = %d\n",s->size_a);
    printf("%d\n",s->a[6]);
    printf("%d\n",s->a[5]);
    printf("%d\n",s->a[4]);
    printf("%d\n",s->a[3]);
    printf("%d\n",s->a[2]);
    printf("%d\n",s->a[1]);
    printf("%d\n",s->a[0]);
            return;
    }
    if(s->size_b <= 1)
    {   
        printf("b\n");
        basecase_2b(s);
        return;
    }
    printf("size_a = %d\n",s->size_a);
    printf("%d\n",s->a[6]);
    printf("%d\n",s->a[5]);
    printf("%d\n",s->a[4]);
    printf("%d\n",s->a[3]);
    printf("%d\n",s->a[2]);
    printf("%d\n",s->a[1]);
    printf("%d\n",s->a[0]);
    printf("size_b = %d\n",s->size_b);
    printf("%d\n",s->b[6]);
    printf("%d\n",s->b[5]);
    printf("%d\n",s->b[4]);
    printf("%d\n",s->b[3]);
    printf("%d\n",s->b[2]);
    printf("%d\n",s->b[1]);
    printf("%d\n",s->b[0]);
    quicksort(s,argc);
}