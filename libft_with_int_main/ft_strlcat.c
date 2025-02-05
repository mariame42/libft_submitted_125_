/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meid <meid@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:50:44 by meid              #+#    #+#             */
/*   Updated: 2025/02/05 21:45:11 by meid             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	slen;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	i = 0;
	j = dlen;
	if (dstsize == 0)
		return (slen);
	if (dstsize < dlen)
		return (slen + dstsize);
	if (dstsize > 0 && dlen < dstsize -1)
	{
		while (src[i] && (dlen + i < dstsize -1))
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
	}
	return (dlen + slen);
}

// int main(void)
// {
// 	char dest[25];
// 	char dest2[25];

// 	strcpy(dest, "mariam");
// 	strcpy(dest2, "mariam");
// 	printf("%zu\n", ft_strlcat(dest, "mariam", 4));
// 	printf("%zu\n", ft_strlcat(dest2, "mariam", 4));
// }