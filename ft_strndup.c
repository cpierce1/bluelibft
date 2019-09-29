/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpierce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 13:49:47 by cpierce           #+#    #+#             */
/*   Updated: 2019/09/19 21:44:51 by cpierce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strndup(const char *s1, size_t n)
{
	char	*res;
	int		i;
	size_t	s;

	s = 0;
	while (s1[s])
		s++;
	if (s > n)
		s = n;
	if (!(res = malloc(sizeof(char) * (s + 1))))
		return (NULL);
	i = 0;
	while (s1[s])
	{
		res[i] = s1[i];
		s--;
		i++;
	}
	res[i] = '\0';
	return (res);
}
