/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdertlio <frkndrtl104@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 00:12:23 by fdertlio          #+#    #+#             */
/*   Updated: 2024/11/04 00:15:58 by fdertlio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_temp;
	unsigned const char	*src_temp;

	if (!dest && !src)
		return (NULL);
	i = 0;
	dest_temp = dest;
	src_temp = src;
	while (i < n)
	{
		*(dest_temp + i) = *(src_temp + i);
		i++;
	}
	return (dest);
}
