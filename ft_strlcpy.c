/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdertlio <frkndrtl104@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 00:28:07 by fdertlio          #+#    #+#             */
/*   Updated: 2024/11/07 23:43:30 by fdertlio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	count;

	count = 0;
	if (size > 0)
	{
		while (*(src + count) && (count < (size - 1)))
		{
			*(dest + count) = *(src + count);
			count++;
		}
		*(dest + count) = '\0';
	}
	while (*(src + count))
		count++;
	return (count);
}
