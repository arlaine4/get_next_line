/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlaine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 19:33:45 by arlaine           #+#    #+#             */
/*   Updated: 2018/11/15 11:30:56 by arlaine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	char		*str1;
	char		*str2;
	size_t		i;
	size_t		j;

	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	j = 0;
	if (n == 0)
		return (1);
	if (s1 && s2)
	{
		if (ft_strlen(str1) != ft_strlen(str2))
			return (0);
		while (str1[i] && str2[j] && (i < n - 1))
		{
			if ((str1[i] != str2[j]) || (str1[i] == '\0' || str2[j] == '\0'))
				return (0);
			i++;
			j++;
		}
		return (1);
	}
	return (0);
}
