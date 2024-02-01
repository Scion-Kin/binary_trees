#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect i.e:
 * every node has two children and the length is the same.
 * @tree: the binary tree to test
 * Return: 1 if perfect, 0 if imperfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int count1, count2;

	if (!tree)
		return (0);

	if (!(tree->left && tree->right))
		return (0);

	count1 = 1 + binary_tree_is_perfect(tree->left);
	count2 = 1 + binary_tree_is_perfect(tree->right);

	if (count1 != count2)
		return (0);

	return (1);
}
