/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meid <meid@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 07:45:18 by meid              #+#    #+#             */
/*   Updated: 2024/08/01 10:51:11 by meid             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*tmp;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		del(tmp->content);
		free(tmp);
	}
	*lst = NULL;
}

// void del(void *content)
// {
// 	free(content);
// }
//
// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	t_list *node1 = ft_lstnew(strdup("node 1"));
// 	t_list	*node2 = ft_lstnew(strdup("node 2"));
// 	ft_lstadd_back(&node1, node2);
// 	t_list	*tmp = node1; 
// 	while (tmp != NULL)
// 	{
// 		printf("%s", (char *)tmp->content);
// 		tmp = tmp->next;
// 	}
// 	ft_lstclear(&node1, del);
// 	if (node1 == NULL)
// 	{
// 		printf("\ngood job");
// 	}
// 	return(0);
// }