/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:21:34 by folim             #+#    #+#             */
/*   Updated: 2023/05/15 16:21:36 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// typedef struct t_list {
//     void *content;               // Data of the node
//     struct s_list *next;    // Pointer to the next node
// } t_list;

t_list	*ft_lstnew(void	*content)
{
	t_list	*new_elem;

	new_elem = malloc(sizeof(t_list));
	if (!new_elem)
		return (0);
	new_elem -> content = content;
	new_elem -> next = NULL;
	return (new_elem);
}

// int main()
// {
//     int value = 42;
//     t_list *new_element = ft_lstnew(&value);

//     // Access the content of the new element
//     //int *ptr = (int *)(new_element->content);
//     int *content = (int *)(new_element->content);
//     printf("Content of the new element: %d\n", *content);
//     free(new_element);

//     printf("%p\n", ft_lstnew((void*)3)-> content);
//     printf("%p\n", ft_lstnew((void*)2)-> content);
//     printf("%p\n", ft_lstnew((void*)3)-> next);
//     printf("%p\n", ft_lstnew((void*)2)-> next);

//		return 0;
// }