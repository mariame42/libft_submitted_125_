/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meid <meid@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:23:59 by meid              #+#    #+#             */
/*   Updated: 2025/02/05 21:43:44 by meid             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

// int	main(void)
// {
// 	t_list	*list;
// 	t_list	*new_element;
// 	t_list	*last;

// 	list = ft_lstnew("first");
// 	new_element = ft_lstnew("second");
// 	ft_lstadd_front(&list, new_element);
// 	new_element = ft_lstnew("third");
// 	ft_lstadd_front(&list, new_element);
// 	last = ft_lstlast(list);
// 	printf("The last lst: %s\n", last->content);
// 	return (0);
// }