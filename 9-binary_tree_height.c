#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: the tree to measure
 * Return: the size of the tree, or 0 if failure
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	const binary_tree_t *current = tree;
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (!current->left && !current->right)
		return (0);

	while (current->left || current->right)
	{
		if (current->left && (current->left->left || current->left->right))
		{
			count++;
			current = current->left;
		}

		else if (current->right && (current->right->left || current->right->right))
		{
			count++;
			current = current->right;
		}
		else if (current->right)
		{
			count++;
			current = current->right;
		}
		else if (current->left)
		{
			count++;
			current = current->left;
		}
		else
			return (0);
	}

	return (count);
}
