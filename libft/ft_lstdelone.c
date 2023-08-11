/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 22:26:37 by folim             #+#    #+#             */
/*   Updated: 2023/05/18 22:26:38 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void del_content(void *content)
// {
//     free(content); // Assuming the content is dynamically allocated
// }

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// int main()
// {
//     // Create a linked list
//     t_list *head = NULL;
//     t_list *second = NULL;
//     t_list *third = NULL;

//     head = malloc(sizeof(t_list));
//     second = malloc(sizeof(t_list));
//     third = malloc(sizeof(t_list));

//     int *data1 = malloc(sizeof(int));
//     int *data2 = malloc(sizeof(int));
//     int *data3 = malloc(sizeof(int));

//     *data1 = 10;
//     *data2 = 20;
//     *data3 = 30;

//     head->content = data1;
//     head->next = second;

//     second->content = data2;
//     second->next = third;

//     third->content = data3;
//     third->next = NULL;

//     // Print the content before deletion
//     t_list *current = head;
//     while (current != NULL)
//     {
//         printf("%d ", *(int *)current->content);
//         current = current->next;
//     }
//     printf("\n");

//     // Delete the second node
//     ft_lstdelone(second, del_content);

//     // Print the content after deletion
//     current = head;
//     while (current != NULL)
//     {
//         printf("%d ", *(int *)current->content);
//         current = current->next;
//     }
//     printf("\n");

//     // Free the remaining nodes
//     ft_lstdelone(head, del_content);
//     ft_lstdelone(third, del_content);

//     return 0;
// }