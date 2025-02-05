/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meid <meid@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 09:19:46 by meid              #+#    #+#             */
/*   Updated: 2025/02/05 21:43:49 by meid             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	new_list = 0;
	if (!f || !lst)
		return (NULL);
	while (lst)
	{
		new_node = malloc(sizeof(t_list));
		if (!new_node)
		{
			ft_lstclear(&new_list, (*del));
			return (NULL);
		}
		new_node->content = f(lst->content);
		new_node->next = NULL;
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

// #include <stdio.h>
// #include <string.h>

// void *duplicate_content(void *content)
// {
//     return strdup((char *)content + 1);
// }

// void del(void *content)
// {
//     free(content);
// }

// int	main(void)
// {
// 	t_list	*list;
// 	t_list	*new_list;
// 	t_list	*new_node;

// 	list = NULL;
// 	new_node = ft_lstnew(strdup("first"));
// 	ft_lstadd_back(&list, new_node);
// 	new_node = ft_lstnew(strdup("second"));
// 	ft_lstadd_back(&list, new_node);
// 	new_node = ft_lstnew(strdup("third"));
// 	ft_lstadd_back(&list, new_node);
// 	new_list = ft_lstmap(list, duplicate_content, del);
// 	printf("Original list:\n");
// 	t_list *current = list;
// 	while (current)
// 	{
// 		printf("%s\n", (char *)current->content);
// 		current = current->next;
// 	}
// 	printf("New list:\n");
// 	current = new_list;
// 	while (current)
// 	{
// 		printf("%s\n", (char *)current->content);
// 		current = current->next;
// 	}
// 	ft_lstclear(&list, del);
// 	ft_lstclear(&new_list, del);
// 	return (0);
// }