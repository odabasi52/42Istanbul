/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:31:15 by modabasi          #+#    #+#             */
/*   Updated: 2023/10/16 18:53:32 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	if (!lst || !(*lst))
		return ;
	while ((*lst)->next)
	{
		ptr = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(ptr, del);
	}
	ft_lstdelone(*lst, del);
	*lst = 0;
}

//when a memory is freed value of memory block is kept
//so assign 0 explicitly
