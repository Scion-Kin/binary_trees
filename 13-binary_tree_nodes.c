#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least one child
 * @tree: the root node of the binary tree to test
 * Return: the number of leaves
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t count = (tree->left || tree->right) ? 1 : 0;

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
