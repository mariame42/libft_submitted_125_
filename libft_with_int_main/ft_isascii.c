/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meid <meid@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:59:07 by meid              #+#    #+#             */
/*   Updated: 2025/02/05 21:42:09 by meid             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	while (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int main(void)
// {
// 	printf("%d\n", ft_isascii(127));
// }