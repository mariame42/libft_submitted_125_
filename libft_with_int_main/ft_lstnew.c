/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meid <meid@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 15:12:49 by meid              #+#    #+#             */
/*   Updated: 2025/02/05 21:43:53 by meid             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc((sizeof(t_list)));
	if (new)
	{
		new->content = content;
		new->next = NULL;
	}
	return (new);
}

// #include <stdio.h>
// int main(void)
// {
// 	t_list *new;
// 	char	*content = "mariam";
// 	new = ft_lstnew(content);
// 	if (new)
// 	{
// 		printf("%s", new->content);
// 		free(new);
// 	}

// }