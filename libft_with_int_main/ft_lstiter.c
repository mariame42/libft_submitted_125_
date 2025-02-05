/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meid <meid@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 08:50:33 by meid              #+#    #+#             */
/*   Updated: 2025/02/05 21:47:23 by meid             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f((void *)lst->content);
		lst = lst->next;
	}
}

// void	print_content(void *content)
// {
// 	printf("%s\n", (char *)content);
// }

// int	main(void)
// {
// 	t_list *list = NULL;

// 	ft_lstadd_back(&list, ft_lstnew(strdup("first")));
// 	ft_lstadd_back(&list, ft_lstnew(strdup("second")));
// 	ft_lstadd_back(&list, ft_lstnew(strdup("third")));

// 	ft_lstiter(list, print_content);

// 	ft_lstclear(&list, free);
// 	return (0);
// }