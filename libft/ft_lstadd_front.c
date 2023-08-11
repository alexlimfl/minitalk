/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:03:19 by folim             #+#    #+#             */
/*   Updated: 2023/05/15 19:03:21 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{	
	if (!lst)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int main()
{   

    t_list **ptr;

    int value = 41;
    t_list *node1 = ft_lstnew(&value);
    //int *lst_cnt = (int *)(lst->content);
    printf("1 *lst->content = %p\n", (node1->content));
    printf("1 *lst->content = %d\n", *(int *)(node1->content));

    *ptr = node1;

    int value2 = 42;
    t_list *newnode = ft_lstnew(&value2);
    // int *newnode_cnt = (int *)(newnode->content);
    printf("2 *newnode->content = %p\n", (newnode->content));
    printf("2 *newnode->content = %d\n", *(int *)(newnode->content));

    ft_lstadd_front(ptr, newnode);

    printf("3 *lst -> content = %p\n", (node1->content));
    printf("3 *lst -> content = = %d\n", *(int *)(node1->content));

    printf("4 *newnode -> content = %p\n", (newnode->content));
    printf("4 *newnode -> content = %d\n", *(int *)(newnode->content));
    // t_list *new = newnode -> next;
    // printf("5 *newnode_cnt = %d\n", *(int *)new -> content);

    //free(lst);
    //free(newnode);
    // free(new);

    return 0;
}*/
