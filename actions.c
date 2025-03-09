/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megoz <megoz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 00:41:56 by megoz             #+#    #+#             */
/*   Updated: 2025/03/09 16:48:57 by megoz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void   sa(int *a)
{
    int temp;

    if (a[0] > 1)
    {
        temp = a[1];
        a[1] = a[0];
        a[0] = temp;
    }
    ft_putstr("sa\n");
}

void   sb(int *a, int *b)
{
    int temp;

    if (b[0] > 1)
    {
        temp = b[1];
        b[1] = b[0];
        b[0] = temp;
    }
    ft_putstr("sb\n");
}

void   ss(int *a, int *b)
{
    sa(a);
    sb(a, b);
    ft_putstr("ss\n");
}

void   pa(int *a, int *b)
{
    int i;

    if (b[0] > 0)
    {
        i = a[0];
        while (i > 0)
        {
            a[i + 1] = a[i];
            i--;
        }
        a[1] = b[1];
        a[0]++;
        i = 1;
        while (i < b[0])
        {
            b[i] = b[i + 1];
            i++;
        }
        b[0]--;
    }
    ft_putstr("pa\n");
}

void    pb(int *a, int *b)
{
    int i;

    if (a[0] > 0)
    {
        i = b[0];
        while (i > 0)
        {
            b[i + 1] = b[i];
            i--;
        }
        b[1] = a[1];
        b[0]++;
        i = 1;
        while (i < a[0])
        {
            a[i] = a[i + 1];
            i++;
        }
        a[0]--;
    }
    ft_putstr("pb\n");
}

void    ra(int *a)
{
    int i;
    int temp;

    if (a[0] > 1)
    {
        temp = a[1];
        i = 1;
        while (i < a[0])
        {
            a[i] = a[i + 1];
            i++;
        }
        a[a[0]] = temp;
    }
    ft_putstr("ra\n");
}

void    rb(int *a, int *b)
{
    int i;
    int temp;

    if (b[0] > 1)
    {
        temp = b[1];
        i = 1;
        while (i < b[0])
        {
            b[i] = b[i + 1];
            i++;
        }
        b[b[0]] = temp;
    }
    ft_putstr("rb\n");
}

void    rr(int *a, int *b)
{
    ra(a);
    rb(a, b);
    ft_putstr("rr\n");
}

void    rra(int *a)
{
    int i;
    int tmp;
    
    i = 0;
    if (a[0] > 1)
    {
        tmp = a[0];
        while (i > 1)
        {
            a[i] = a[i - 1];
            i--;
        }
        a[1] = tmp;
    }
    ft_putstr("rra\n");

}

void    rrb(int *a, int *b)
{
    int i;
    int temp;

    if (b[0] > 1)
    {
        temp = b[b[0]];
        i = b[0];
        while (i > 1)
        {
            b[i] = b[i - 1];
            i--;
        }
        b[1] = temp;
    }
    ft_putstr("rrb\n");
}