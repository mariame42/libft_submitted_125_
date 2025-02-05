/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meid <meid@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 09:15:28 by meid              #+#    #+#             */
/*   Updated: 2025/02/05 21:45:27 by meid             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*str;

	i = 0;
	str = (char *)s;
	len = ft_strlen(str);
	if (str == 0)
		return (0);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}

// char functiono(unsigned int i, char c)
// {
// 	if (c >= 'a' && c <= 'z')
// 		c -= 32;
// 	i++;
// 	return (c);
// }

// int main(void)
// {
// 	char *res;

// 	res = ft_strmapi("mariam", functiono);
// 	printf("%s", res);
// }