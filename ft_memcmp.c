/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdertlio <frkndrtl104@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 00:17:02 by fdertlio          #+#    #+#             */
/*   Updated: 2024/11/04 00:20:58 by fdertlio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char const *s1_temp;
	unsigned char const *s2_temp;

	i = 0;
	s1_temp = s1;
	s2_temp = s2;
	while (n > i)
	{
		if (*(s1_temp + i) != *(s2_temp + i))
			return (*(s1_temp + i) - *(s2_temp + i))
		i++;
	}
	return (0);
}
