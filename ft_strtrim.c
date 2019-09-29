/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpierce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 11:59:20 by cpierce           #+#    #+#             */
/*   Updated: 2019/09/28 18:07:55 by cpierce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	innerlen(char const *s)
{
	int		i;
	int		res;

	i = 0;
	res = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[i])
	{
		i++;
		res++;
	}
	i--;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i--;
		res--;
	}
	return (res);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	char	*res;
	char	*p;
	int		l;

	l = innerlen(s);
	i = 0;
	if (!(res = (char*)malloc(sizeof(char) * (l + 1))))
		return ("");
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	p = res;
	l += i;
	while (i < l)
	{
		*p = s[i];
		p++;
		i++;
	}
	*p = '\0';
	return (res);
}
