/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdertlio <frkndrtl104@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 23:25:01 by fdertlio          #+#    #+#             */
/*   Updated: 2024/11/07 23:44:31 by fdertlio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char		*temp;
	unsigned char	c_temp;

	temp = s;
	c_temp = c;
	s += ft_strlen((char *)s);
	while (s >= temp)
	{
		if (*s == c_temp)
			return ((char *)s);
		s--;
	}
	return (NULL);
}
