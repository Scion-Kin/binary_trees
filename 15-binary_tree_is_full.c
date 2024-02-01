#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: the node/binary tree to test
 * Return: 1 if full, 0 if not.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && tree->right)
		return (0);

	if (binary_tree_is_full(tree->left) && !binary_tree_is_full(tree->right))
		return (0);

	return (binary_tree_is_full(tree->left) >= binary_tree_is_full(tree->right));
}
