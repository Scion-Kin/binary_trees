#include "binary_trees.h"

size_t counter(const binary_tree_t *tree, size_t count);

/**
 * binary_tree_nodes - counts the nodes with at least one child
 * @tree: the root node of the binary tree to test
 * Return: the number of leaves
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	if (!tree)
		return (0);

	count = counter(tree, 0);
	count += (!tree->parent) ? 1 : 0;

	return (count);
}

/**
 * counter - counts checks for nodes with child recursively
 * @tree: the node to check
 * @count: the number of the current leaves
 * Return: the number of leaves
 */

size_t counter(const binary_tree_t *tree, size_t count)
{
	if (!tree)
		return (count);

	if (tree->left || tree->right)
	{
		if (tree->left)
			count = counter(tree->left, ++count);

		else if (tree->right)
			count = counter(tree->right, ++count);
	}

	return (count);
}
