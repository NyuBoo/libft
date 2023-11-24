/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanaranj <yanaranj@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:30:59 by yanaranj          #+#    #+#             */
/*   Updated: 2023/11/19 20:24:38 by yanaranj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>
int main ()
{
	t_list *a = ft_lstnew("node1");
	t_list *b = ft_lstnew("node2");
	t_list *c = ft_lstnew("node3");

	a->next = b;
	b->next = c;
	t_list *lastnode = ft_lstlast(a);
	printf("%s\n", (char *)lastnode->content);
	return (0);
}*/
