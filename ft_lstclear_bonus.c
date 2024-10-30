/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:32:30 by mohaben-          #+#    #+#             */
/*   Updated: 2024/10/30 17:20:33 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (!lst || !del || !*lst)
		return ;
	next = NULL;
	while (*lst)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
}

#include <stdio.h>

void	delete(void	*content)
{
	content = NULL;
	free(content);
}

int main()
{
	t_list	*lst;

	void	*content;
	content = "Abcd";
	lst = ft_lstnew(content);

	void	*content1;
	content1 = "cdef";
	ft_lstadd_back(&lst, ft_lstnew(content1));

	void	*content2;
	content2 = "cdef";
	ft_lstadd_back(&lst, ft_lstnew(content2));
}