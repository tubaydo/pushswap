/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaaydogan <tubaaydogan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:45:39 by tubaaydogan       #+#    #+#             */
/*   Updated: 2023/02/24 18:18:18 by tubaaydogan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

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
int error();

#endif