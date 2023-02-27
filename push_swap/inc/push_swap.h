/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taydogan <taydogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:45:39 by tubaaydogan       #+#    #+#             */
/*   Updated: 2023/02/26 20:11:38 by taydogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef PUSH_SWAP_H
#define PUSH_SWAP_H


#define NULL __DARWIN_NULL

#define fence __atomic_thread_fence
#define RELEASE __ATOMIC_RELEASE
#define ACQUIRE __ATOMIC_ACQUIRE

#include "libft.h"
#include "stdio.h"
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

typedef struct stack{
    int *a;
    int size_a;
    int *b;
    int size_b;
}stack;

int *makeArr(int size,char **arr);
void pushSwap(int argc, int *arr);
void intExceed(int argc,char **argv);
void isTheSame(int argc,char **argv);
void isnt_int(int argc,char **argv);
void pa(stack *s,int c,int argc);
void pb(stack *s,int c,int argc);
void pop_a(stack *s);
void pop_b(stack *s);
void sa(stack *s);
void sb(stack *s);
void ss(stack *s);
void reverse(int* arr, int i, int j);
void rotate(int* nums, int numsSize, int k);
void ra(stack *s);
void rb(stack *s);
void rr(stack *s);
void rra(stack *s);
void rrb(stack *s);
void rrr(stack *s);
int error();

#endif