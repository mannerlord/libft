/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdertlio <frkndrtl104@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 00:09:12 by fdertlio          #+#    #+#             */
/*   Updated: 2024/11/07 23:38:42 by fdertlio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s1, int c, size_t n)
{
	size_t		i;

	i = 0;
	while (n > i)
	{
		if (*(unsigned char *)(s1 + i) == (unsigned char)c)
			return ((void *)(s1 + i));
		i++;
	}
	return (NULL);
}
