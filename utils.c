/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megoz <megoz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 00:42:25 by megoz             #+#    #+#             */
/*   Updated: 2025/02/24 00:42:25 by megoz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "push_swap.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	ptr = malloc(sizeof(char) * len);
	if (ptr == NULL)
		return (NULL);
	ptr[len - 1] = '\0';
	ft_memcpy(ptr, s1, ft_strlen(s1));
	ft_memcpy(ptr + ft_strlen(s1), s2, ft_strlen(s2));
	return (ptr);
}

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

int	execution(int *list_a, int argc, int *list_b)
{	
	int i;
	
	i = 0;
	while (i < argc - 1)
	{
		printf("TESTTEST\n");
		write(1, &list_a[i], 1);
		i++;
	}
	is_three(list_a, argc);
	is_raddix(list_a, list_b, argc);
	return 0;
}
