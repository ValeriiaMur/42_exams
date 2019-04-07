/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_tree.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 18:02:02 by exam              #+#    #+#             */
/*   Updated: 2019/03/29 18:32:43 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct s_node
{
	int value;
	struct s_node *right;
	struct s_node *left;
}Node;

void reverse_tree( Node *root)
{
	Node *tmp = root->left;
	root->left = root->right;
	root->right = tmp;

	if (root->right)
		reverse_tree(root->right);
	if (root->left)
		reverse_tree(root->left);
}
