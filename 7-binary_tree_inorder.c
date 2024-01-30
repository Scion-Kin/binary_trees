#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses a tree in in-order mode
 * @tree: the binary tree to traverse
 * @func: the function to call for each node encountered
 * Return: Nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
