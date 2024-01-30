#include "binary_trees.h"

/**
 * binary_tree_depth - measure the depth of a binary tree
 * @tree: the node/tree to measure
 * Return: the depth of the node/tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *current = tree;
	size_t count = 0;

	if (!tree)
		return (0);

	while (current->parent)
	{
		current = current->parent;
		count++;
	}

	return  (count);
}
