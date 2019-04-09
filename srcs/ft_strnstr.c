/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncammie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 23:09:09 by ncammie           #+#    #+#             */
/*   Updated: 2019/04/09 23:09:18 by ncammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t lenn;
    size_t lenh;
    size_t i;

    if (!*needle)
        return ((char*)haystack);
    lenh = ft_strlen(haystack);
    lenn = ft_strlen(needle);
    if (lenn > lenh)
        return (NULL);
    i = -1;
    if (len >= lenn)
        while (++i <= lenh - (lenn + len))
		{
            if (!ft_strncmp(haystack + i, needle, lenn))
                return ((char*)haystack + i);
		}
    return (NULL);
}
