/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdertlio <frkndrtl104@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 06:48:21 by fdertlio          #+#    #+#             */
/*   Updated: 2024/11/07 23:43:18 by fdertlio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (*(dest + i) && (i < size))
		i++;
	while (*(src + j) && ((i + j + 1) < size))
	{
		*(dest + i + j) = *(src + j);
		j++;
	}
	if (i < size)
		*(dest + i + j) = '\0';
	while (*(src + j))
		j++;
	return (i + j);
}
