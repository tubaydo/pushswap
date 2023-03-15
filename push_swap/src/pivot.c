/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pivot.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taydogan <taydogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:07:57 by taydogan          #+#    #+#             */
/*   Updated: 2023/03/15 18:56:09 by taydogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int median(int *arr,int size)
{
    int i;
    int j;
    int pivot;
    int tmp;
    
    i = 0;
    printf("mediansize = %d\n\n",size);
    while(i <= size)
    {
        j = i+1;
        while(j <= size)
        {
          if(arr[i] > arr[j])
          {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
          }
          j++;
        }
        i++;
    }
    for(int h = 0;h <= size;h++)
    {
        printf("arbys [%d] -> %d\n\n",h,arr[h]);
    }
    pivot = arr[size/2+size%2];
    return (pivot);  
}
int ft_max(int *arr)
{
    int i;
    int max;

    max = arr[0];    
    i = 1;
    while(i < 3)
   {
        if(arr[i] > max)
            max = arr[i];
        i++;
   }
   return(max);
}

void three_a(stack *s)
{
    int max;
    max = ft_max(s->a);
   printf("ilk arr_a -->%d\n\n",s->a[2]);
   printf("ilk arr_a -->%d\n\n",s->a[1]);
   printf("ilk arr_a -->%d\n\n",s->a[0]);
    printf("max_a -->%d\n\n",max);
   if(max == s->a[0])
   {
        if(s->a[1] < s->a[2])
            sa(s);
        else
        {
            sa(s);
            rra(s);
        }            
   }
   if(max == s->a[1])
   {
        if(s->a[0] < s->a[2])
        {
            ra(s);
            sa(s);
        }
        else
            rra(s);
   }
   if(max == s->a[2])
   {
        if(s->a[0] < s->a[1])
            return ;
        else
            ra(s);
   }
   printf("yeni arr_a -->%d\n\n",s->a[2]);
   printf("yeni arr_a -->%d\n\n",s->a[1]);
   printf("yeni arr_a -->%d\n\n",s->a[0]);
}

void three_b(stack *s)
{
    int max;
    max = ft_max(s->b);
   printf("ilk arr_b -->%d\n\n",s->b[2]);
   printf("ilk arr_b -->%d\n\n",s->b[1]);
   printf("ilk arr_b -->%d\n\n",s->b[0]);
   printf("max_b -->%d\n\n",max);
   if(max == s->b[0])
   {
        if(s->b[1] < s->b[2])
            rrb(s);
        else
        {
            sb(s);
            rb(s);
        }            
   }
   if(max == s->b[1])
   {
        if(s->b[0] < s->b[2])
            sb(s);
        else
            rb(s);
   }
   if(max == s->b[2])
   {
        if(s->b[0] < s->b[1])
            return ;
        else
        {
            sb(s);
            rb(s);
        }
   }
   printf("yeni arr_b -->%d\n\n",s->b[2]);
   printf("yeni arr_b -->%d\n\n",s->b[1]);
   printf("yeni arr_b -->%d\n\n",s->b[0]);
   pa(s);
   pa(s);
   pa(s);
}
void base_case_a(stack *s)
{
    if(s->a[0] < s->a[1])
        sa(s);
    else
        return ;
}

void base_case_b(stack *s)
{
    if(s->b[0] > s->b[1])
        sb(s);
    pa(s);
    pa(s);
}

void quicksort(stack *s,int size,int *arr)
{
    int pivot;
    int items;
    int j;
    int i;
    int k;
    
    k = 0;
    while(k <= size)
    {
        printf("array[%d] --> %d\n\n",k,s->a[k]);
        k++;
    }
    pivot = median(arr,size);
    i = 0;
    j = 0;
    
    items = size;
    printf("pivot == %d\n\n",pivot);
    if ( pivot == 0)
        return ;
    
	while (i <= items)
	{
		if (s->a[size] < pivot && s->a[size] != '\0')
        {
            printf("s->a[size] = %d\n\n ",s->a[size]);
			pb(s);
            size--;
        }
		else
         {
            j++;
			ra(s);
        }
        i++;
    }
    printf("items -->%d\n\n",items);
    printf("size_a -->%d\n\n",s->size_a);
    printf("size_b -->%d\n\n",s->size_b);
    if(s->size_a == 2)
        three_a(s);
    if ( s->size_a == 1)
        base_case_a(s);
    if(s->size_a >= 3)
        pushSwap(items/2+items%2 + 1,s->a);
    if(s->size_b == 2)
        three_b(s);
    if ( s->size_a == 1)
        base_case_b(s);
    if(s->size_b >= 3)
        pushSwap(items/2+items%2 + 1,s->b);
    printf("son %d\n\n",s->a[6]);
    printf("son %d\n\n",s->a[5]);
    printf("son %d\n\n",s->a[4]);
    printf("son %d\n\n",s->a[3]);
    printf("son %d\n\n",s->a[2]);
    printf("son %d\n\n",s->a[1]);
    printf("son %d\n\n",s->a[0]);
}
