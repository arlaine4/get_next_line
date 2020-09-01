/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlaine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:08:38 by arlaine           #+#    #+#             */
/*   Updated: 2018/11/14 13:36:05 by arlaine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*dest;
	const char	*s;
	size_t		n;
	size_t		dstlen;

	dest = dst;
	s = src;
	n = size;
	while (n-- != 0 && *dest)
		dest++;
	dstlen = dest - dst;
	n = size - dstlen;
	if (n == 0)
		return (dstlen + ft_strlen(s));
	while (*s)
	{
		if (n != 1)
		{
			*dest++ = *s;
			n--;
		}
		s++;
	}
	*dest = '\0';
	return (dstlen + (s - src));
}
