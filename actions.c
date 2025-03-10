/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megoz <megoz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 00:41:56 by megoz             #+#    #+#             */
/*   Updated: 2025/03/10 20:29:50 by megoz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void   popop(t_stack *a)
{
    int i;
    int j;

    j = 0;
    i = a->elem_count;
    while (i > 1)
    {
        a->array[j] = a->array[j + 1];
        i--;
        j++;
    }
    a->elem_count--;
}


// void   sa(int *a)
// {
//     int temp;

//     if (a[0] > 1)
//     {
//         temp = a[1];
//         a[1] = a[0];
//         a[0] = temp;
//     }
//     ft_putstr("sa\n");
// }

// void   sb(int *a, int *b)
// {
//     int temp;

//     if (b[0] > 1)
//     {
//         temp = b[1];
//         b[1] = b[0];
//         b[0] = temp;
//     }
//     ft_putstr("sb\n");
// }

// void   ss(int *a, int *b)
// {
//     sa(a);
//     sb(a, b);
//     ft_putstr("ss\n");
// }

void    pa(t_stack *a, t_stack *b)
{
    if (b->elem_count > 0)
        {
            int i;
            
            i = a->elem_count;
            while (i > 0)
            {
                a->array[i] = a->array[i - 1];
				i--;
            }
            a->array[0] = b->array[0];
            a->elem_count++;
        }
        popop(b);
        ft_putstr("pa\n");
}


void    pb(t_stack *a, t_stack *b)
{
    if (a->elem_count > 0)
        {
            int i;
            
            i = b->elem_count;
            while (i > 0)
            {
                b->array[i] = b->array[i - 1];
				i--;
            }
            b->array[0] = a->array[0];
            b->elem_count++;
        }
        popop(a);
        ft_putstr("pb\n");
		for (int y = 0; y < b->elem_count; y++)
            printf("B-NIN %d. ELEMANI = %d\n", y, b->array[y]);
}

void    ra(t_stack *a)
{
    int tmp;
    int i;

    i = 0;
    tmp = a->array[0];
    while (i < a->elem_count)
    {
        a->array[i] = a->array[i + 1];
        i++;
    }
    a->array[a->elem_count - 1] = tmp;
    ft_putstr("ra\n");
}

void    rb(t_stack *b)
{
    int tmp;
    int i;

    i = 0;
    tmp = b->array[0];
    while (i < b->elem_count)
    {
        b->array[i] = b->array[i + 1];
        i++;
    }
    b->array[b->elem_count - 1] = tmp;
    ft_putstr("rb\n");
}

// void    rr(int *a, int *b)
// {
//     ra(a);
//     rb(a, b);
//     ft_putstr("rr\n");
// }

// void    rra(int *a)
// {
//     int i;
//     int tmp;
    
//     i = 0;
//     if (a[0] > 1)
//     {
//         tmp = a[0];
//         while (i > 1)
//         {
//             a[i] = a[i - 1];
//             i--;
//         }
//         a[1] = tmp;
//     }
//     ft_putstr("rra\n");

// }

// void    rrb(int *a, int *b)
// {
//     int i;
//     int temp;

//     if (b[0] > 1)
//     {
//         temp = b[b[0]];
//         i = b[0];
//         while (i > 1)
//         {
//             b[i] = b[i - 1];
//             i--;
//         }
//         b[1] = temp;
//     }
//     ft_putstr("rrb\n");
// }