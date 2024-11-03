/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdertlio <frkndrtl104@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:38:02 by fdertlio          #+#    #+#             */
/*   Updated: 2024/10/29 14:56:17 by fdertlio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(char *str)
{
    int i;
    int sign;
    int num;

	i = 0;
	sign = 1;
	num = 0;
	while ((*(str + i) >= 9 && *(str + i) <= 13) || *(str + i) == 32)
		i++;
	if (*(str + i) == '-')
	{
		sign = -1;
		i++;
	}
	else if (*(str + i) == '+')
		i++;
	while(*(str + i) >= '0' && *(str + i) <= '9')
	{
		num *= 10;
		num += *(str + i) - '0';
		i++;
	}
	return (num * sign);
}