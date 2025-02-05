/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meid <meid@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 13:26:50 by meid              #+#    #+#             */
/*   Updated: 2025/02/05 21:41:54 by meid             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*arr;

	if (size && count > SIZE_MAX / size)
		return (NULL);
	arr = (void *)malloc(count * size);
	if (!(arr))
		return (NULL);
	ft_bzero(arr, (count * size));
	return (arr);
}

int	main(void)
{
	int	*arr;
	int	i;

	arr = ft_calloc(5, sizeof(int));
	i = 0;
	if (!arr)
		return (1);
	while (i < 5)
		printf("%d ", arr[i++]);
	printf("\n");
	free(arr);
	return (0);
}
