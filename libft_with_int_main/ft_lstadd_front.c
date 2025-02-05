/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meid <meid@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 11:52:18 by meid              #+#    #+#             */
/*   Updated: 2025/02/05 21:43:05 by meid             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>
// int main()
// {
// 	t_list *node1 = ft_lstnew("Ali");
// 	t_list *node2 = ft_lstnew("Alsherif");
// 	ft_lstadd_front(&node1, node2);
// 	t_list *tmp = node1;
// 	while(tmp)
// 	{
// 		printf("%s\n", (char *)tmp->content);
// 	tmp = tmp->next;
// 	}
// }