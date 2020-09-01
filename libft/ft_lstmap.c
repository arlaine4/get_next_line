/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlaine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 14:43:09 by arlaine           #+#    #+#             */
/*   Updated: 2018/11/13 15:33:58 by arlaine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *tmpl;
	t_list *struc;
	t_list *tmpstruc;

	if (lst == NULL || f == NULL)
		return (NULL);
	tmpl = f(lst);
	if (!(struc = ft_lstnew(tmpl->content, tmpl->content_size)))
		return (NULL);
	tmpstruc = struc;
	lst = lst->next;
	while (lst)
	{
		tmpl = f(lst);
		if (!(tmpstruc->next = ft_lstnew(tmpl->content, tmpl->content_size)))
			return (NULL);
		tmpstruc = tmpstruc->next;
		lst = lst->next;
	}
	return (struc);
}
