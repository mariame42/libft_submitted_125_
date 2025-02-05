/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meid <meid@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 09:43:14 by meid              #+#    #+#             */
/*   Updated: 2025/02/05 21:45:02 by meid             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void	f_toupper(unsigned int i, char *s)
// {
// 	i = 0;
// 	while (s[i])
// 	{
// 		if (s[i] >= 'a' && s[i] <= 'z')
// 			s[i] -= 32;
// 		i++;
// 	}
// }
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char str[20];
// 	strcpy(str, "mariam");
// 	printf("%s\n", str);
// 	ft_striteri(str, f_toupper);
// 	printf("%s\n", str);
// 	return (0);
// }