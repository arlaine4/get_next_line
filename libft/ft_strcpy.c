/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlaine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:23:12 by arlaine           #+#    #+#             */
/*   Updated: 2018/11/08 18:42:02 by arlaine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int		i;
	char	*copy;

	copy = (char *)src;
	i = 0;
	while (copy[i])
	{
		dest[i] = copy[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
