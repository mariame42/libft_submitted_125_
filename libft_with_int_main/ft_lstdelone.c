/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meid <meid@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 06:08:13 by meid              #+#    #+#             */
/*   Updated: 2025/02/05 21:43:23 by meid             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// void	del(void *content)
// {
// 	free(content);
// }

// int	main(void)
// {
// 	char	*content;
// 	t_list	*node;

// 	content = "Test";
// 	node = ft_lstnew(ft_strdup(content));
// 	if (!node)
// 	{
// 		free(content);
// 		return (1);
// 	}
// 	printf("Node content: %s\n", (char *)node->content);
// 	ft_lstdelone(node, del);
// 	printf("Node content: %s\n", (char *)node->content);
// 	return (0);
// }
