/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpierce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 19:28:27 by cpierce           #+#    #+#             */
/*   Updated: 2019/09/28 18:40:14 by cpierce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *need, size_t len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (ft_strlen((char*)need) > len)
		return (NULL);
	if (!*need)
		return ((char*)hay);
	while (hay[i] != '\0' && (size_t)i < len)
	{
		if (hay[i] == need[0])
		{
			j = 1;
			while (need[j] != '\0' && hay[i + j] == need[j] && (size_t)(i + j) < len)
				j++;
			if (need[j] == '\0')
				return ((char*)&hay[i]);
		}
		i++;
	}
	return (NULL);
}
