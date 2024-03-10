#include "binary_trees.h"

/**
 *
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int count1 = 0, count2 = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	if (!tree->left || !tree->right)
		if (tree->left)
			return (1);
		if (tree->right)
			return (0);

	if (tree->left && tree->right)
		if (binary_tree_is_full(tree))
			return (binary_tree_depth(tree->left) - binary_tree_depth(tree->right));

	return (0);
}
