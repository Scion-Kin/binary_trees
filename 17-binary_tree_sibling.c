#include "binary_trees.h"

/**
 * binary_tree_sibling - finds a sibling of a node in a binary tree
 * @node: the node to look for its sibling
 * Return: the sibling, or else, NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	if (node->parent)
	{
		if (node == node->parent->left)
		{
			if (node->parent->right)
				return (node->parent->right);
			return (NULL);
		}
		if (node == node->parent->right)
		{
			if (node->parent->left)
				return (node->parent->left);
			return (NULL);
		}
	}
	return (NULL);
}
