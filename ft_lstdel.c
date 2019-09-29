/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpierce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 20:08:41 by cpierce           #+#    #+#             */
/*   Updated: 2019/09/18 22:11:13 by cpierce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *nxt;
	t_list *cur;

	cur = *alst;
	while (cur != NULL)
	{
		nxt = cur->next;
		del(cur, cur->content_size);
		free(cur);
		cur = nxt;
	}
	*alst = NULL;
}
