/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megoz <megoz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 22:41:10 by megoz             #+#    #+#             */
/*   Updated: 2025/03/02 22:41:10 by megoz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check_base_condition(char *base)
{
	int a;
	int b;

	a = 0;
	b = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[a] != '\0')
	{
		b = a + 1;
		if (base[a] == '+' || base[a] == '-')
			return (0);
		if (base[a] < ' ' || base[a] > '~')
			return (0);
		while (base[b] != '\0')
		{
			if (base[a] == base[b])
				return (0);
			b++;
		}
		a++;
	}
	return (1);
}

void	ft_putmaxneg_base(int nbr, char *base)
{
	if (nbr <= (-1 * ft_strlen(base)))
	{
		ft_putmaxneg_base(nbr / ft_strlen(base), base);
		ft_putmaxneg_base(nbr % ft_strlen(base), base);
	}
	else
		ft_putchar(base[-nbr]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (check_base_condition(base))
	{
		if (nbr == -2147483648)
		{
			ft_putchar('-');
			ft_putmaxneg_base(nbr, base);
			return ;
		}
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;
		}
		if (nbr >= ft_strlen(base))
		{
			ft_putnbr_base(nbr / ft_strlen(base), base);
			ft_putnbr_base(nbr % ft_strlen(base), base);
		}
		else
			ft_putchar(base[nbr]);
	}
}
