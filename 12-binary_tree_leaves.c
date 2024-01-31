#include "binary_trees.h"

size_t counter(const binary_tree_t *tree, size_t count);

/**
 * binary_tree_leaves - counts the number of leaves in a binary tree
 * @tree: the root node of the binary tree to test
 * Return: the number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);

	count = counter(tree, 0);

	return (count);
}

/**
 * counter - counts checks for leaves recursively
 * @tree: the node to check
 * @count: the number of the current leaves
 * Return: the number of leaves
 */

size_t counter(const binary_tree_t *tree, size_t count)
{
	if (!tree)
		return (count);

	if ((!tree->left && !tree->right))
		return (++count);

	return (counter(tree->left, count) + counter(tree->right, count));
}
