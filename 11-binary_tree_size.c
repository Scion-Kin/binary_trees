#include "binary_trees.h"

size_t count_nodes(const binary_tree_t *tree);

/**
 * binary_tree_size - finds the size of a binary tree
 * @tree: the tree to measure
 * Return: the size on success, otherwise 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (count_nodes(tree));
}

/**
 * count_nodes - recursively counts the nodes in a binary tree
 * @tree: the tree to count nodes in
 * Return: the number of nodes in the tree
 */

size_t count_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Recursively count nodes in the left and right subtrees */
	/* These comments are for future reference... or should I say present? */

	return (1 + count_nodes(tree->left) + count_nodes(tree->right));
}
