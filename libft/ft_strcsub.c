/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcsub.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlaine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 11:27:10 by arlaine           #+#    #+#             */
/*   Updated: 2018/11/21 20:06:10 by arlaine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		count(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

char			*ft_strcsub(char const *s, char c)
{
	size_t		i;
	char		*dest;

	dest = NULL;
	i = 0;
	if (!s)
		return (NULL);
	if (!(dest = (char *)malloc(sizeof(char) * count(s, c) + 1)))
		return (NULL);
	while (s[i] != c)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
