/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pivot.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taydogan <taydogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:07:57 by taydogan          #+#    #+#             */
/*   Updated: 2023/03/14 18:30:26 by taydogan         ###   ########.fr       */
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
    printf("arr %d\n",arr[4]);
    printf("%d\n",arr[3]);
    printf("%d\n",arr[2]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[0]);
    printf("aaaaa%d\n",size);
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
void quicksort(stack *s,int size,int *arr)
{
    int pivot;
    int items;
    int j;
    int i;

    pivot = median(arr,size);
    i = 0;
    j = 0;
    
    items = size;
    printf("pvtttt%d\n",pivot);
    
	while (i <= items)
	{
        // printf("size  %d\n",size);
        // printf("s->size_a = %d\n",s->size_a);
        // printf("s->a[size] = %d\n",s->a[size]);
		if (s->a[size] <= pivot)
        {
            printf("s->a[size] = %d\n",s->a[size]);
			pb(s);
            size--;
        }
		if (j++)
			ra(s);
        i++;
    }
    printf("%d\n",s->a[5]);
    printf("%d\n",s->a[4]);
    printf("%d\n",s->a[3]);
    printf("%d\n",s->a[2]);
    printf("%d\n",s->a[1]);
    printf("%d\n",s->a[0]);
    printf("b %d\n",s->b[5]);
    printf("%d\n",s->b[4]);
    printf("%d\n",s->b[3]);
    printf("%d\n",s->b[2]);
    printf("%d\n",s->b[1]);
    printf("%d\n",s->b[0]);
    //quicksort(s,items,);
}