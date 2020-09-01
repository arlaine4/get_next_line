/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlaine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 14:36:21 by arlaine           #+#    #+#             */
/*   Updated: 2018/11/24 11:54:21 by arlaine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			ft_new_line(char **str, char **line, int fd, int ret)
{
	char		*tmp;
	int			lenght;

	lenght = 0;
	while (str[fd][lenght] != '\n' && str[fd][lenght] != '\0')
		lenght++;
	if (str[fd][lenght] == '\n')
	{
		*line = ft_strsub(str[fd], 0, lenght);
		tmp = ft_strdup(str[fd] + lenght + 1);
		free(str[fd]);
		str[fd] = tmp;
		if (str[fd][0] == '\0')
			ft_strdel(&str[fd]);
	}
	else if (str[fd][lenght] == '\0')
	{
		if (ret == BUFF_SIZE)
			return (get_next_line(fd, line));
		*line = ft_strdup(str[fd]);
		ft_strdel(&str[fd]);
	}
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	static char		*str[4864];
	char			*buf;
	char			*tmp;
	int				ret;

	if (fd < 0 || line == NULL)
		return (-1);
	buf = ft_memalloc(BUFF_SIZE + 1);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if (str[fd] == NULL)
			str[fd] = ft_strnew(1);
		tmp = ft_strjoin(str[fd], buf);
		free(str[fd]);
		str[fd] = tmp;
		if (ft_strchr(buf, '\n'))
			break ;
	}
	free(buf);
	if (ret < 0)
		return (-1);
	else if (ret == 0 && (str[fd] == NULL || str[fd][0] == '\0'))
		return (0);
	return (ft_new_line(str, line, fd, ret));
}
