/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 17:59:21 by marvin            #+#    #+#             */
/*   Updated: 2025/02/19 17:59:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	count_word(const char *p, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (p[i])
	{
		while (p[i] == c && p[i])
			i++;
		if (p[i] != c && p[i])
		{
			len++;
			while (p[i] != c && p[i])
				i++;
		}
	}
	return (len);
}

char	**ft_split(char *s, char c)
{
	char	**list;
	size_t	i;
	size_t	tmp;
	size_t	h_y;

	i = 0;
	h_y = 0;
	list = (char **)malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!list)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		tmp = i;
		while (s[tmp] && s[tmp] != c)
			tmp++;
		if (count_word(s, c) == h_y)
			break ;
		list[h_y++] = ft_substr(s, i, tmp - i);
		i = tmp;
	}
	list[h_y] = 0;
	return (list);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= s_len || s_len == 0 || len == 0)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

char	*ft_strdup(const char *s)
{
	char	*p;
	int		i;
	int		len;

	len = ft_strlen(s);
	i = 0;
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	while (s[i])
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	execution(int **list)
{	
	
	int i = 0;
	while ((*list)[i])
	{
		printf("31 %d\n", (*list)[i]);
		i++;
	}
	return 0;
}
