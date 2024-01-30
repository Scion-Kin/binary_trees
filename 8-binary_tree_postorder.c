#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses a tree in post-order mode
 * @tree: the binary tree to traverse
 * @func: the function to call for each node encountered
 * Return: Nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
