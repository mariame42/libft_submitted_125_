/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meid <meid@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 12:57:35 by meid              #+#    #+#             */
/*   Updated: 2025/02/05 21:45:15 by meid             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > SIZE_MAX)
	{
		return (ft_strlen(src));
	}
	if (dstsize == 0)
	{
		return (ft_strlen(src));
	}
	if (dstsize > 0)
	{
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i] != '\0')
		i++;
	return (i);
}

// int main(void)
// {
// 	char *src;
// 	char dest[20];

// 	src = "mariam";
// 	strcpy(dest, "haitham");
// 	printf("%zu", ft_strlcpy(dest, src, 7));
// }