/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megoz <megoz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 00:42:07 by megoz             #+#    #+#             */
/*   Updated: 2025/02/24 00:42:07 by megoz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_atoi(const char *str)
{
	// error caseleri düzeltilecek
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

	i = 1;
	stack = malloc(sizeof(stack));
	if (!stack)
	return ;
	// if (argc == 2)
	// {
	// 	elements = count_word(argv[1], ' ');
	// 	argc = elements;
	// }
	stack->stack_a = (int*)malloc((argc - 1) * sizeof(int));
	ft_strjoin(argv, stack->stack_a);
	ft_split();

	// if (!stack->stack_a)
	// 	return ;
	// while (i < argc)
	// {
	// 	stack->stack_a[i - 1] = ft_atoi(argv[i]);
	// 	i++;
	// }
	// execution(stack->stack_a, argc, stack->stack_b);
}

int main(int argc, char **argv)
{
    if (argc < 2)
         return (0);
	// int	i = 0;
	// int	*test = [20, 10];
	// sa(test);
	// while (test[i] != '\0')
	// {
	// 	printf("%d.eleman = %d", i, test[i]);
	// 	i++;
	// }
	initial(argc, argv);
	ft_putstr("\n");
    return (0);
}
