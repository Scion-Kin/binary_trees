#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node in a binary tree
 * @node: the node to find it's uncle
 * Return: the uncle of the node, else, NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	if (node->parent)
	{
		if (node->parent->parent)
		{
			if (node->parent == node->parent->parent->left)
			{
				if (node->parent->parent->right)
					return (node->parent->parent->right);
				return (NULL);
			}
			if (node->parent == node->parent->parent->right)
			{
				if (node->parent->parent->left)
					return (node->parent->parent->left);
				return (NULL);
			}
		}
		return (NULL);
	}
	return (NULL);
}
