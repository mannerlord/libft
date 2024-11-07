/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdertlio <frkndrtl104@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 00:34:45 by fdertlio          #+#    #+#             */
/*   Updated: 2024/11/07 23:44:13 by fdertlio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (*(haystack + i) && (len > i))
	{
		j = 0;
		while (*(haystack + i + j) && *(needle + j)
			&& *(haystack + i + j) == *(needle + j) && (len > (i + j)))
			j++;
		if (!*(needle + j))
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
