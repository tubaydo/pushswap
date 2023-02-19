
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

void pushSwap(char **arr)
{
	stack s;
	int size;
	int i;
	int t;

	i = 0;
	size = 0;
	if(!arr)
		return;
	while(arr[size] != NULL)
		size++;
	t = size;
	s.a = malloc(size * sizeof(int));
	if(!s.a)
		return;
	stack.size_a = size;
	s.b = malloc(size * sizeof(int));
	if(!s.b)
	{
		free(s.a);
		return;
	}
	stack.size_b = size;
	// dizinin son elemanını stackın ilk elemanı haline getiriyoruz
	while(i < size)
	{
		s.a[i] = arr[t];
		i++;
		t--;
	}
	printf("%i",s.a[i]);
}

int main(int argc, char **argv)
{
	int *arr;

	// if(argc == 1)
	// 	error();
	// isnt_int(argc, **argv);
	// isTheSame(argc, **argv);
	// intExceed(argc, **argv);
	argv++;
	if (argc >= 2)
	{
		argv = split(*argv,' ');
		pushSwap(argv);
	}
	return(0);
}

