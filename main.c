/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 13:37:13 by marvin            #+#    #+#             */
/*   Updated: 2025/02/17 13:37:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_atoi(const char *str)
{
	int neg;
	int i;
	int num;

	i = 0;
	neg = 1;
	num = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * neg);
}

char	*convert_to_int(char *str, int *ptr)
{
	int i;
	int j;
	int num;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
		else
		{
			num = ft_atoi(&str[i]);
			ptr[j] = num;
			j++;
			while (str[i] != ' ' && (str[i] < 9 || str[i] > 13))
				i++;
		}
	}
}

int element_counter(char *str)
{
    int i;
    int count;

    count = 0;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		{
            i++;
			if (str[i] != '\0' && !(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
				count++;
		}
		else{
			i++;
		}
		
    }	
	return (count + 1);
}

void	initial(int argc, char **argv)
{
	if (argc < 2)
        return ;
    int	elements;
    int	*ptr;
	int	i;
	char	**pointer;
	t_stack *stack;


	i = 0;
    elements = element_counter(argv[1]);
	stack = malloc(sizeof(t_stack));
	stack->stack_a = (int*)malloc((elements + 1) * sizeof(int));
	if (!stack->stack_a)
		return ;
	pointer = ft_split(argv[1], ' ');

	while (i < elements)
	{
		stack->stack_a[i] = ft_atoi(pointer[i]);
		i++;
	}
	stack->stack_a[i] = '\0';
	i = 0;
	while (stack->stack_a[i] != '\0')
	{
		printf("%d\n", stack->stack_a[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
    if (argc < 2)
        return (0);
	
    initial(argc, argv);
    return (0);
}