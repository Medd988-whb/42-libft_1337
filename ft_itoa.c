/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:43:09 by mohaben-          #+#    #+#             */
/*   Updated: 2024/11/04 10:40:35 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nb_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	long	num;

	len = nb_len(n);
	num = n;
	res = (char *)malloc((len + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	res[len] = '\0';
	if (n < 0)
	{
		res[0] = '-';
		num = -num;
	}
	while (len > 0)
	{
		len--;
		if (n < 0 && len == 0)
			return (res);
		res[len] = (num % 10) + '0';
		num /= 10;
	}
	return (res);
}
