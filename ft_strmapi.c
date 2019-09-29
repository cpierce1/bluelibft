/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpierce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 20:39:55 by cpierce           #+#    #+#             */
/*   Updated: 2019/09/20 19:34:20 by cpierce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*place;
	char			*res;

	i = 0;
	if (!s || !(res = ft_memalloc((size_t)ft_strlen((char*)s))))
		return (NULL);
	place = res;
	while (s[i])
	{
		*place = f(i, s[i]);
		place++;
		i++;
	}
	return (res);
}
