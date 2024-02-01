#include "binary_trees.h"

int counter(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect i.e:
 * every node has two children and the length is the same.
 * @tree: the binary tree to test
 * Return: 1 if perfect, 0 if imperfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int count1 = 0, count2 = 0;

	if (!tree)
		return (0);

	count1 += counter(tree->left);
	count2 += counter(tree->right);

	if (count1 != count2)
		return (0);

	return (1);
}

/**
 * counter - checks if a node has 0 or 2 children, recursively
 * @tree: the node to check
 * Return: 1 of perfect, 0 if not
 */

int counter(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (!tree->left || !tree->right)
		return (0);

	return(counter(tree->left) + counter(tree->right));
}
