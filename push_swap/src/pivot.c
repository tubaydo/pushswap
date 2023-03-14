/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pivot.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taydogan <taydogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:07:57 by taydogan          #+#    #+#             */
/*   Updated: 2023/03/14 21:06:29 by taydogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int median(int * arr,int size)
{
    int i;
    int j;
    int pivot;
    int tmp;
    
    i = 0;
    while(i < size)
    {
        j = i+1;
        while(j < size)
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
    // printf("arr %d\n",arr[4]);
    // printf("%d\n",arr[3]);
    // printf("%d\n",arr[2]);
    // printf("%d\n",arr[1]);
    // printf("%d\n",arr[0]);
    // printf("aaaaa%d\n",size);
    pivot = arr[((size + 1)/2) - 1];
    return (pivot);  
}

// void uptoindex(stack *s,int pivotindex,int size)
// {
//     pushSwap(size-pivotindex,s->a);
//     while(size >= pivotindex)
//     {
//         pb(s);
//         size--;
//     }
// }
// void sa_ctrl(stack *s)
// {
//     if(s->a[s->size_a] > s->a[s->size_a-1])
//         sa(s);
//     else
//         return;
// }
// void basecase_2a(stack  *s)
// {
//     if(s->a[s->size_a] > s->a[s->size_a-1])
//         return;
//     else
//         sa(s);
// }
// void basecase_2b(stack *s)
// {
//     if(s->a[s->size_b] > s->a[s->size_b-1])
//         return;
//     else
//         sa(s);
// }
// int unsorted_a(int *s,int c)
// {
//     while(c >= 0)
//     {
//         if(s[c] > s[c - 1])
//             return(1);
//         c--;
//     } 
//    return(0);
// }
// int unsorted_b(int *s,int c)
// {
//     while(c >= 0)
//     {
//         if(s[c] < s[c - 1])
//             return(1);
//         c--;
//     } 
//    return(0);
// }
int ft_max(int *arr)
{
    int i;
    int max;

    max= arr[0];    
    i = 1;
    while(i < 3)
   {
        if(arr[i] > max)
            max = arr[i];
        i++;
   }
   return(max);
}

int *three(int *arr,stack *s)
{
    int max;
    max = ft_max(arr);
   if(max == arr[0])
   {
        if(arr[1] < arr[2])
            ra(s);
        else
        {
            sa(s);
            rra(s);
        }            
   }
   if(max == arr[1])
   {
        if(arr[0] < arr[2])
        {
            ra(s);
            sa(s);
        }
        else
            rra(s);
   }
   if(max == arr[2])
   {
        if(arr[0] < arr[1])
            return 0;
        else
            sa(s);
   }
   printf("yeni arr%d\n",arr[0]);
   printf("yeni arr%d\n",arr[1]);
   printf("yeni arr%d\n",arr[2]);
   return(arr);
}

void quicksort(stack *s,int size,int *arr)
{
    int pivot;
    int items;
    int j;
    int i;
    printf(" arr mıdır neydir bişi%d\n",s->a[5]);
    printf("%d\n",s->a[4]);
    printf("%d\n",s->a[3]);
    printf("%d\n",s->a[2]);
    printf("%d\n",s->a[1]);
    printf("%d\n",s->a[0]);
    pivot = median(arr,size);
    i = 0;
    j = 0;
    
    items = size;
    printf("pvtttt%d\n",pivot);
    if ( pivot == 0)
        return ;
    
	while (i <= items)
	{
        // printf("size  %d\n",size);
        // printf("s->size_a = %d\n",s->size_a);
        // printf("s->a[size] = %d\n",s->a[size]);
		if (s->a[size] <= pivot && s->a[size] != '\0')
        {
            printf("s->a[size] = %d\n",s->a[size]);
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
    printf("size a%d\n",s->size_a);
    if(s->size_a == 3)
        s->a = three(s->a,s);
    pushSwap(items,s->a);
    if(s->size_b == 3)
        s->b =three(s->b,s);
    pushSwap(items,s->b);
    //
    
    // printf("b %d\n",s->b[5]);
    // printf("%d\n",s->b[4]);
    // printf("%d\n",s->b[3]);
    // printf("%d\n",s->b[2]);
    // printf("%d\n",s->b[1]);
    // printf("%d\n",s->b[0]);
    //quicksort(s,items,);
}