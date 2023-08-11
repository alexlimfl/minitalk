/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:19:58 by folim             #+#    #+#             */
/*   Updated: 2023/05/18 17:20:00 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// int main()
// {
// 	t_list *node1 = ft_lstnew("One");
// 	t_list *node2 = ft_lstnew("Two");
// 	t_list *node3 = ft_lstnew("Three");

// 	// node1->content = (void*)1;
// 	node1->next = node2;
// 	// node2->content = (void*)2;
// 	node2->next = node3;
// 	// node3->content = (void*)3;
// 	node3->next = NULL;
// 	t_list *lastNode = ft_lstlast(node1);
// 	printf("Last list: %s\n", (char *)lastNode->content);
// 	free(node1);
// 	free(node2);
// 	free(node3);
// 	return 0;
// }