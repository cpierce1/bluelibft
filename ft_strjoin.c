/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpierce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 20:56:52 by cpierce           #+#    #+#             */
/*   Updated: 2019/09/25 21:47:00 by cpierce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	char	*p;
	size_t	l;
	size_t	i;

	l = ft_strlen((char*)s1) + ft_strlen((char*)s2) + 1;
	if (!(res = (char*)malloc(sizeof(char) * l)))
		return (NULL);
	p = res;
	i = 0;
	while (i < l - ft_strlen((char*)s2) - 1)
	{
		*p = s1[i];
		p++;
		i++;
	}
	l -= i;
	i = 0;
	while (i < l - 1)
	{
		*p = s2[i];
		p++;
		i++;
	}
	*p = '\0';
	return (res);
}
