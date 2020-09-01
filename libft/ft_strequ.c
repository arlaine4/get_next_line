/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlaine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 18:13:49 by arlaine           #+#    #+#             */
/*   Updated: 2018/11/10 15:25:28 by arlaine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	if (s1 && s2)
	{
		if (ft_strlen(str1) != ft_strlen(str2))
			return (0);
		while (str1[i] && str2[j])
		{
			if (str1[i] != str2[j])
				return (0);
			i++;
			j++;
		}
		return (1);
	}
	return (0);
}
