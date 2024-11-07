/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdertlio <frkndrtl104@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 19:56:16 by fdertlio          #+#    #+#             */
/*   Updated: 2024/11/07 23:38:07 by fdertlio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_size(int n)
{
	unsigned int	size;

	size = 0;
	if (n < 0)
		size++;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char			*ret;
	unsigned int	i;

	if (n == -2147483648)
		return ("-2147483648");
	i = ft_size(n);
	ret = (char *)malloc(sizeof(char) * (i + 1));
	if (!ret)
		return (NULL);
	if (n == 0)
		*(ret) = '0';
	else if (n < 0)
	{
		*(ret) = '-';
		n *= -1;
	}
	*(ret + i) = '\0';
	while (n > 0)
	{
		*(ret + i -1) = '0' + (n % 10);
		n /= 10;
		i--;
	}
	return (ret);
}
