/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intersection.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 18:45:36 by exam              #+#    #+#             */
/*   Updated: 2019/03/29 18:52:45 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


typedef struct s_node 
{
	void *content;
	struct s_node *next;
}Node;

void *intersection(Node *lst1, Node *lst2)
{
	while (lst1)
	{
		Node* tmp = lst2;
		while (tmp)
		{
			if (lst1 == tmp)
				return lst1;
			tmp = tmp->next;
		}
		lst1 = lst1->next;
	}
	return 0;
}
