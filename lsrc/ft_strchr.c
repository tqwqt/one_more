/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhavryle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 18:20:11 by vhavryle          #+#    #+#             */
/*   Updated: 2017/11/06 18:20:13 by vhavryle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = -1;
	while (s[++i] != '\0')
		if (s[i] == c)
			return ((char*)&s[i]);
	if (c == '\0')
		return ((char*)&s[i]);
	return (NULL);
}