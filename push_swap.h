/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megoz <megoz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 00:42:18 by megoz             #+#    #+#             */
/*   Updated: 2025/02/24 00:42:18 by megoz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_stack
{
    int *stack_a;
    int *stack_b;
} t_stack;

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

// is_functions.c
void    is_three(int *list_a, int argc);
void	is_raddix(int *list_a, int *list_b, int argc);

// utils.c
char	*ft_strjoin(char const *s1, char const *s2);
size_t	count_word(const char *p, char c);
char	**ft_split(char *s, char c);
int		execution(int *list_a, int argc, int *list_b);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *str);
void	initial(int argc, char **argv);

// utils2.c
void    ft_putchar(char c);
void	ft_putstr(char *str);
void	*ft_memcpy(void *dst, const void *src, size_t n)

// actions.c
void   sa(int *a);
void   sb(int *a, int *b);
void   ss(int *a, int *b);
void   pa(int *a, int *b);
void    pb(int *a, int *b);
void    ra(int *a);
void    rb(int *a, int *b);
void    rr(int *a, int *b);
void    rra(int *a);
void    rrb(int *a, int *b);

// ft_putnbr_base.c
int		check_base_condition(char *base);
void    ft_putmaxneg_base(int nbr, char *base);
void	ft_putnbr_base(int nbr, char *base);


#endif