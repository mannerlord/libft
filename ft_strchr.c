/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdertlio <frkndrtl104@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 23:22:39 by fdertlio          #+#    #+#             */
/*   Updated: 2024/11/03 23:22:41 by fdertlio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	c_temp;

	c_temp = c;
	while (*s)
	{
		if (*(unsigned char *)s == c_temp)
			return ((char *)s);
		s++;
	}
	if (c_temp == '\0')
		return ((char *)s);
	return (0);
}
