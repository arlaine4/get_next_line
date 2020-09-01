/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlaine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 12:51:03 by arlaine           #+#    #+#             */
/*   Updated: 2018/11/14 17:21:37 by arlaine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_fullblank(char *src)
{
	int i;

	i = 0;
	while (src[i] == ' ' || src[i] == '\t' || src[i] == '\n')
		i++;
	if (src[i] == '\0')
		return (1);
	return (0);
}

static char	*ft_avancesrc(char *src)
{
	int i;

	i = 0;
	while (src[i] == ' ' || src[i] == '\t' || src[i] == '\n')
		i++;
	src = src + i;
	return (src);
}

static char	*ft_destvide(void)
{
	char	*dest;

	if (!(dest = (char*)malloc(sizeof(char) + 1)))
		return (NULL);
	dest[0] = '\0';
	return (dest);
}

char		*ft_strtrim(char const *s)
{
	char		*dest;
	char		*src;
	int			i;
	int			j;

	j = 0;
	src = (char*)s;
	if (!s)
		return (NULL);
	if (ft_fullblank(src) == 1)
		return (ft_destvide());
	src = ft_avancesrc(src);
	i = ft_strlen(src) - 1;
	while (src[i] == ' ' || src[i] == '\t' || src[i] == '\n')
		i--;
	if (!(dest = (char*)malloc(sizeof(char) * i + 2)))
		return (NULL);
	while (j <= i)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
