/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlaine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 12:18:11 by arlaine           #+#    #+#             */
/*   Updated: 2018/11/14 17:16:19 by arlaine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ns;
	unsigned char	check;

	check = (unsigned char)c;
	ns = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		if (ns[i] == check)
			return (ns + i);
		i++;
	}
	return (NULL);
}
