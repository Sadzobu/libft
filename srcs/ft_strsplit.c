/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncammie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 19:09:43 by ncammie           #+#    #+#             */
/*   Updated: 2019/04/09 23:07:48 by ncammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_cntwrd(char const *s, char c)
{
	size_t	res;
	size_t	len;
	size_t	i;

	res = 0;
	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
			res++;
		i++;
	}
	return (res);
}

static	size_t	ft_cntsmb(char const *s, char c)
{
	size_t	res;

	res = 0;
	while (s[res] && s[res] != c)
		res++;
	return (res);
}

static	void	ft_memdelall(void ***ap)
{
	if (ap)
		if (*ap)
		{
			while (**ap)
				ft_memdel(**ap);
			ft_memdel(*ap);
		}
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	pos;
	char	**res;
	
	if (s)
	{
		res = (char **)malloc(sizeof(*res) * (ft_cntwrd(s, c) + 1));
		if (res)
		{
			i = 0;
			j = 0;
			pos = 0;
			while (j < (ft_cntwrd(s, c)))
				if (s[i++] != c)
				{
					pos = i - 1;
					res[j++] = ft_strsub(s, pos, ft_cntsmb(s + pos, c));
					i += ft_cntsmb(s + pos, c);
				}
			res[j] = NULL;
			return (res);
		}
	}
	return (NULL);
}
