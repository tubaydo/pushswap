
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

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	strsayac;

	i = -1;
	strsayac = -1;
	if (!s)
		return (0);
	if (start >= strlen((char *)s))
		return (strdup(""));
	if (len > strlen(s))
		str = malloc(sizeof(char) * strlen(s) + 1);
	else
		str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	while (s[start] && ++i <= len)
	{
		str[++strsayac] = (char)s[start];
		start++;
	}
	str[len] = '\0';
	return (str);
}

int	ftcount(char const *s, char c)
{
	int	i;
	int	count;

	count = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		st;
	char	**str;

	i = 0;
	st = 0;
	if (!s)
		return (NULL);
	str = malloc((ftcount(s, c)) * sizeof(char *));
	if (!str)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			st = 0;
			while (*s && *s != c && ++st)
				++s;
			str[i++] = ft_substr(s - st, 0, st);
		}
		else
			++s;
	}
	str[i] = 0;
	return (str);
}

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}


int	ft_atoi(const char *str)
{
	long long int	number;
	int				sign;

	number = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (ft_isdigit(*str))
	{
		number = (number * 10) + (*str - '0') * sign;
		str++;
		if (number > 2147483647)
			return (-1);
		if (number < -2147483648)
			return (0);
	}
	return (number);
}
void error()
{
	write(1,"ERROR!\n", 7);
}

void isnt_int(int argc,char **argv)
{
	int i;
	int val;

	i = 1;
	while(i < argc)
	{
		val = ft_atoi(argv[i]);
		if (val == 0 && argv[i][0] != '0')
            error();
		i++;
	}
}

void isTheSame(int argc,char **argv)
{
	int num;
	int num2;
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		num = ft_atoi(argv[i]);
		while (j < argc)
		{
			num2 = ft_atoi(argv[j]);
			if(num == num2)
				error();
			j++;
		}
		i++;
	}
}

void intExceed(int argc,char **argv)
{
	int i;
	int num;

	i = 1;
	while(i < argc)
	{
		num = ft_atoi(argv[i]);
		if(num < -2147483648 || num < 2147483647)
			error();
		i++;
	}
}
//   xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
//   xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx




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
	while(i < size -1)
	{
		new_array[i] = ft_atoi(arr[t]);
		t--;
		i++;
	}
	
	return(new_array);
}
void pushSwap(int argc, int *arr)
{
	stack s;
	int size;
	int i;
	int t;

	i = 0;
	size = argc;
	if(!arr)
		return;
	t = size -1;
	s.a = malloc(size * sizeof(int));
	if(!s.a)
		return;
	s.size_a = size;
	s.b = malloc(size * sizeof(int));
	if(!s.b)
	{
		free(s.a);
		return;
	}
	s.size_b = size;
	// dizinin son elemanını stackın ilk elemanı haline getiriyoruz
	while(i < size)
	{
		s.a[i] = arr[t];
		i++;
		t--;
	}
	printf("%d",s.a[i-1]);
}

int main(int argc, char **argv)
{
	int *arr;
	if(argc == 1)
		error();
	argv++;
	isnt_int(argc, argv);
	isTheSame(argc, argv);
	intExceed(argc, argv);
	if (argc >= 2)
	{
		argv = ft_split(*argv,32);
		arr = makeArr(argc-1,argv);
		pushSwap(argc-1,arr);
	}
	return(0);
}

