/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlaine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 14:05:08 by arlaine           #+#    #+#             */
/*   Updated: 2018/11/14 11:27:07 by arlaine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*copy;

	copy = (char *)s;
	i = ft_strlen(s);
	while (i)
	{
		if (copy[i] == c)
			return (copy + i);
		i--;
	}
	if (copy[i] == c)
		return ((char *)s);
	return (NULL);
}
