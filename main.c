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

int ft_atoi(char *str)
{
	// error caseleri düzeltilecek
	int neg;
	int i;
	int num;

	i = 0;
	neg = 1;
	num = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
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

char *convert_to_int(char *str, int *ptr)
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
		else
		{
			i++;
		}
	}
	return (count + 1);
}

void initial(int argc, char **argv)
{
	if (argc < 2)
		return;
	else
	{
		t_stack *stack_a;
		t_stack *stack_b;
		char *ptr;
		char **pointer;
		int i;
		int elements;


		i = 1;
		ptr = "";
		while (i < argc && argv && argv[i])
		{
			ptr = ft_strjoin(ptr, argv[i]);
			ptr = ft_strjoin(ptr, " ");
			i++;
		}
		i = 0;
		pointer = ft_split(ptr, ' ');
		// i = -1;
		// while (pointer[++i])
		// {
		// 	printf("pointer: %s\n", pointer[i]);
		// }
		// exit(1);
		stack_a = malloc(sizeof(t_stack *));
		stack_b = malloc(sizeof(t_stack *));
		if (!stack_a)
		{
			free(stack_a);
			return;
		}
		if (!stack_b)
		{
			free(stack_b);
			return;
		}
		stack_a->elem_count = count_word(ptr, ' ');
		printf("SENBUSIPORUYAPIYONHE\n");
		printf("TESTSBIR\n");

		stack_a->array = malloc((stack_a->elem_count) * sizeof(int));
		stack_b->array = malloc((stack_a->elem_count) * sizeof(int));
		if (!(stack_a->array) || !(stack_b->array))
		{
		printf("TESTSBIR\n");

			free(stack_a->array);
			free(stack_b->array);
			free(stack_a);
			free(stack_b);
		}
		printf("TESTSBIR\n");

		while (i < stack_a->elem_count)
		{
			stack_a->array[i] = ft_atoi(pointer[i]);
			printf("ÇEVİRDİĞİM %d. SAYI = %d\n", i, stack_a->array[i]);
			i++;
		}
		stack_b->elem_count = 0;
		execution(stack_a, argc, stack_b);
	}
}

int main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	else
	{
		initial(argc, argv);
		ft_putstr("\n");
	}
	return (0);
}

// pb koşulu çözülecek.
// ./a.out 11 57 36 44 20 19 4
