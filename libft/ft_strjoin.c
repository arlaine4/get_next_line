/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlaine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 12:59:23 by arlaine           #+#    #+#             */
/*   Updated: 2018/11/23 16:41:40 by arlaine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*copy;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (0);
	if (!(copy = ft_memalloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		copy[j++] = s1[i++];
	i = 0;
	while (s2[i])
		copy[j++] = s2[i++];
	copy[j] = '\0';
	return (copy);
}
