/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 17:43:47 by folim             #+#    #+#             */
/*   Updated: 2023/05/17 17:43:50 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// typedef struct	s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }				t_list;

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

// int main()
// {
// 	t_list *node1 = malloc(sizeof(t_list));
// 	t_list *node2 = malloc(sizeof(t_list));
// 	t_list *node3 = malloc(sizeof(t_list));

// 	node1->content = NULL;
// 	node1->next = node2;
// 	node2->content = NULL;
// 	node2->next = node3;
// 	node3->content = NULL;
// 	node3->next = NULL;

// 	int size = ft_lstsize(node1);

// 	printf("Size of the linked list: %d\n", size);

// 	free(node1);
// 	free(node2);
// 	free(node3);

// 	return 0;
// }
