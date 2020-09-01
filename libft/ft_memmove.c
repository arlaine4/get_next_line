/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlaine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 11:27:09 by arlaine           #+#    #+#             */
/*   Updated: 2018/11/14 09:01:31 by arlaine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*csrc;
	char	*cdest;
	size_t	i;

	if (src == dest)
		return (dest);
	csrc = (char *)src;
	cdest = (char *)dest;
	if (src < dest)
	{
		i = len;
		while (i-- > 0)
			cdest[i] = csrc[i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			cdest[i] = csrc[i];
			i++;
		}
	}
	return (dest);
}
