/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 13:37:09 by marvin            #+#    #+#             */
/*   Updated: 2025/02/17 13:37:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

struct s_stack
{
    int *stack_a;
    int *stack_b;
    int *sorted;
} typedef t_stack;

size_t	count_word(const char *p, char c);
char	**ft_split(char *s, char c);
int     execution(int **list);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *str);
void	initial(int argc, char **argv);

#endif