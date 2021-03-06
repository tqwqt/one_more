/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhavryle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 12:09:36 by vhavryle          #+#    #+#             */
/*   Updated: 2017/11/14 12:09:38 by vhavryle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret;
	t_list	*tmp;

	ret = NULL;
	if (lst && f)
	{
		ret = (*f)(lst);
		tmp = ret;
		lst = lst->next;
		while (lst)
		{
			tmp->next = (*f)(lst);
			tmp = tmp->next;
			lst = lst->next;
		}
	}
	return (ret);
}
