/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meid <meid@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:57:31 by meid              #+#    #+#             */
/*   Updated: 2025/02/05 21:43:58 by meid             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	counter;

	counter = 0;
	while (lst)
	{
		++counter;
		lst = lst->next;
	}
	return (counter);
}

// int main()
// {
// 	t_list *node1 = ft_lstnew("mariam");
// 	t_list *node2 = ft_lstnew("mariam1");
// 	t_list *node3 = ft_lstnew("mariam2");
// 	int size;
// 	ft_lstadd_back(&node1, node2);
// 	ft_lstadd_back(&node2, node3);
// 	size = ft_lstsize(node1);
// 	printf("%d\n", size);
// }