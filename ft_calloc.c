/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:24:00 by mohaben-          #+#    #+#             */
/*   Updated: 2024/11/04 10:36:18 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*p;

	if (num != 0 && size > ((size_t) -1) / num)
		return (NULL);
	p = malloc(num * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, num * size);
	return (p);
}
