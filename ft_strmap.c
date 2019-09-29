/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpierce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 20:29:57 by cpierce           #+#    #+#             */
/*   Updated: 2019/09/20 19:40:53 by cpierce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*place;
	char	*res;

	i = 0;
	if (!s || !(res = ft_memalloc((size_t)ft_strlen((char*)s))))
		return (NULL);
	place = res;
	while (s[i])
	{
		*place = f(s[i]);
		place++;
		i++;
	}
	return (res);
}
