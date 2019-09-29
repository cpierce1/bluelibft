/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpierce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 12:54:53 by cpierce           #+#    #+#             */
/*   Updated: 2019/09/28 17:55:57 by cpierce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*itoax(int num, int len, int neg)
{
	char	*res;
	int		i;
	int		j;
	int		cur;

	res = (char*)malloc(sizeof(char) * (len + 1));
	i = len;
	j = 0;
	cur = num * neg;
	res[len] = '\0';
	while (i >= 0)
	{
		res[i] = (cur % 10) + '0';
		cur /= 10;
		i--;
	}
	if (neg == -1)
		res[0] = '-';
	return (res);
}

static int checkmax(int n)
{
	if (n == 2147483647)
		return (1);
	else if (n == -2147483648)
		return (-1);
	else
		return (0);
}

char		*ft_itoa(int n)
{
	char	*res;
	int		cur;
	int		neg;
	int		l;

	cur = n;
	neg = 1;
	l = 0;
	if (n < 0)
	{
		neg = -1;
		l++;
	}
	cur *= neg;
	if (checkmax(n) == 1)
		return ("2147483647");
	else if (checkmax(n) == -1)
		return ("-2147483648");
	while (cur / 10 > 0)
	{
		cur /= 10;
		l++;
	}
	res = itoax(n, l, neg);
	return (res);
}
