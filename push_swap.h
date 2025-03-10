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
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
typedef struct s_stack
{
    int *array;
    //int *flag;
    size_t elem_count;

} t_stack;




// is_functions.c
// void    is_three(int *list_a, int argc);
void	is_raddix(int *list_a, int *list_b, int argc);

// utils.c
char	*ft_strjoin(char *s1, char *s2);
size_t	count_word(char *p, char c);
char	**ft_split(char *s, char c);
void		execution(t_stack *a, int argc, t_stack *b);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *str);
void	initial(int argc, char **argv);

// utils2.c
void    ft_putchar(char c);
void	ft_putstr(char *str);
char	*ft_strjoin(char *s1, char *s2);

// actions.c
// void   sa(int *a);
// void   sb(int *a, int *b);
// void   ss(int *a, int *b);
void    pa(t_stack *a, t_stack *b);
void    pb(t_stack *a, t_stack *b);
void    ra(t_stack *a);
void    rb(t_stack *b);
// void    rr(int *a, int *b);
// void    rra(int *a);
// void    rrb(int *a, int *b);
void   popop(t_stack *a);


// ft_putnbr_base.c
int		check_base_condition(char *base);
void    ft_putmaxneg_base(int nbr, char *base);
int	ft_putnbr_base(int nbr, char *base);

int getMax(int *a);
void radix_sort_push_swap(t_stack *a, t_stack *b);




#endif