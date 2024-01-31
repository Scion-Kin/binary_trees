#include "binary_trees.h"

size_t counter(const binary_tree_t *tree, size_t count);

/**
 * binary_tree_nodes - counts the nodes with at least one child
 * @tree: the root node of the binary tree to test
 * Return: the number of leaves
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		count = counter(tree, 1);

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
	if (!tree || !(tree->left && tree->right))
		return (count);

	counter(tree->left, count++);
	counter(tree->right, count++);
	return (count);
}
