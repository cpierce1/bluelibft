/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpierce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 12:20:14 by cpierce           #+#    #+#             */
/*   Updated: 2019/09/26 22:37:26 by cpierce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	check_empty(char const *s, char c)
{
	int		i;
	int		res;

	i = 0;
	res = 0;
	while (s[i])
	{
		if (s[i] != c)
			res = 1;
		i++;
	}
	return (res);
}

static int	num_items(char const *s, char c)
{
	int		l;
	int		i;
	int		res;

	i = 0;
	res = 0;
	if (check_empty(s, c))
		res++;
	while (s[i])
		i++;
	l = i + 1;
	i = 0;
	while (i < l)
	{
		if (s[i] == c)
			if (s[i + 1] != c && s[i + 1] != '\0')
				res++;
		i++;
	}
	return (res);
}

static char	*get_str(char const *s, char c, int place)
{
	int		l;
	int		i;
	char	*res;

	l = 0;
	i = place;
	while (s[i] != c)
	{
		i++;
		l++;
	}
	res = (char*)malloc(sizeof(char) * (l + 1));
	i = 0;
	while (s[place] != c && s[place] != '\0')
	{
		res[i] = s[place];
		place++;
		i++;
	}
	res[i] = '\0';
	return (res);
}

char		**ft_strsplit(char const *s, char c)
{
	int		items;
	char	**res;
	int		i;
	int		ai;

	items = num_items(s, c);
	i = 0;
	if (!(res = (char**)malloc(sizeof(char*) * items)))
		return (NULL);
	ai = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			res[ai] = get_str(s, c, i);
			ai++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (res);
}
