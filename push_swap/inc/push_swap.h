/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taydogan <taydogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:56:18 by taydogan          #+#    #+#             */
/*   Updated: 2023/02/19 18:31:20 by taydogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "../libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

typedef struct stack{
    int a[MAX_SIZE];
    int size_a;
    int b[MAX_SIZE];
    int size_b;
}stack;


void intExceed(int argc,char **argv);
void isTheSame(int argc,char **argv);
void isnt_int(int argc,char **argv);

#endif