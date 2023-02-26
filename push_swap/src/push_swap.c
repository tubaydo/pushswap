/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taydogan <taydogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:57:24 by taydogan          #+#    #+#             */
/*   Updated: 2023/02/26 18:11:48 by taydogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// "" İÇİNDE YAZILANLARIN HEPSİNİ İNT OLARAK ALMASINI SAĞLAYACAK OLAN FUNC


int *makeArr(int size,char **arr)
{
    int *new_array;
    int i;
    int t;
    
    i = 0;
    t = size -1;
    new_array = malloc(size * sizeof(int));
    if(!new_array)
        return(0);
    while(i <= size -1)
    {
        new_array[i] = ft_atoi(arr[t]);
        t--;
        i++;
    }
    return(new_array);
}
void pushSwap(int argc, int *arr)
{
    stack *s;
    int i;
    int t;

    i = 0;
    t = argc -1;
    if(!arr)
        return;
    s = malloc(sizeof(stack));
    if(!s)
        return;
    s->a = malloc(argc * sizeof(int));
    if(!s->a)
    {
        free(s);
        return;
    }
    s->size_a = argc - 1;
    s->size_b = 0;
    s->b = malloc(argc * sizeof(int));
    if(!s->b)
    {
        free(s->a);
        free(s);
        return;
    }
    while(i <= argc-1)
    {
        s->a[i] = arr[t];
        i++;
        t--;
    }
    printf("%d\n",s->a[1]);
    printf("%d\n",s->a[0]);
    free(s->a);
    free(s->b);
    free(s);
}


int main(int argc, char **argv)
{
    int *arr;
    char **ptr;
    char **c;
    int size;

    size = 0;
    argv++;
    isnt_int(argc,argv);
    isTheSame(argc,argv);
    intExceed(argc,argv);
    if(argc == 2)
    {
        ptr = ft_split(*argv,' ');
        c = ptr;
        while(*ptr != NULL)
        {
            ptr++;
            size++;
        }
        ptr = c;
        arr = makeArr(size,ptr);
        pushSwap(size,arr);
        exit(1);
    }
    if(argc > 2)
    {
        arr = makeArr(argc-1,argv);
        pushSwap(argc-1,arr);
    }
    else
        error();
}
