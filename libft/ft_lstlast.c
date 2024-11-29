/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annaershova <annaershova@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:52:07 by aershova          #+#    #+#             */
/*   Updated: 2023/08/15 15:02:37 by annaershova      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
lst: The beginning of the list.

Return value
Last node of the list

Returns the last node of the list.
*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

/*
#include "stdio.h"

int main()
{
	t_list *test1;
	t_list *test2;
	t_list *test3;
	char *str1 = "3HELLO";
	char *str2 = "2world";
	char *str3 = "1!!!!!!!";
	test1 = ft_lstnew(str1);
	test2 = ft_lstnew(str2);
	test3 = ft_lstnew(str3);
	ft_lstadd_front(&test1, test2);
	ft_lstadd_front(&test1, test3);
	int size = ft_lstsize(test1);
	printf("%d\n", size);
	

	t_list *last;
	last = ft_lstlast(test1);
	printf("%s\n", (char *)last->content);
	return (0);
}
*/