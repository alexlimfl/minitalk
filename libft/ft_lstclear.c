/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:33:23 by folim             #+#    #+#             */
/*   Updated: 2023/05/19 13:33:26 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_lstclear(t_list **lst, void (*del)(void *))
// {
// 	t_list	*temp;

// 	if (!lst || !del)
// 		return ;
// 	while (*lst)
// 	{
// 		temp = *lst;
// 		ft_lstdelone(temp, del);
// 		*lst = (*lst)->next;
// 	}
// 	*lst = NULL;
// }

// KO
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*next;

	if (!lst || !del)
		return ;
	temp = *lst;
	while (temp != NULL)
	{
		del(temp->content);
		free(temp);
		next = temp->next;
		temp = next;
	}
	*lst = NULL;
}
