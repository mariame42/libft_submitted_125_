/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meid <meid@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 18:35:03 by meid              #+#    #+#             */
/*   Updated: 2025/02/05 21:44:02 by meid             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	c1;

	i = 0;
	c1 = (unsigned char)c;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == c1)
			return (str + i);
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	char *str;
// 	int c;

// 	str = "mariam";
// 	c = 'i';
// 	printf("%s", ft_memchr(str, c, 5));
// }