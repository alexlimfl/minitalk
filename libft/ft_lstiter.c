/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:09:28 by folim             #+#    #+#             */
/*   Updated: 2023/05/19 16:09:34 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void printnode(void *content)
// {
// 	printf("printnode\n");
// 	printf("%s\n", (char *) content);
// }

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// int main()
// {
// 	t_list *n1 = ft_lstnew("One");
// 	t_list *n2 = ft_lstnew("Two");
// 	t_list *n3 = ft_lstnew("Three");

// 	n1->next = n2;
// 	n2->next = n3;
// 	n3->next = NULL;
// 	printf("*1\n");
// 	ft_lstiter(n1, printnode);
// 	printf("*2\n");
// 	free(n1);
// 	printf("*3\n");
// 	free(n2);
// 	printf("*4\n");
// 	free(n3);
// 	printf("*5\n");
// 	return (0);
// }

// exmaple()
// {
// 	char c = 'a';
// 	char str[] = "sdfghjdfg";
// 	char *test;
// 	char **test2;

// 	*test2 = str;
// 	*test = c;
// 	*test = str; //(wrong)
// 	void *ptr;

// 	(char *)ptr = str;
// 	*(char *)ptr = str;
// }