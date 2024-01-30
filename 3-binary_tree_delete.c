#include "binary_tree.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: the tree to delete
 * Return: None
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
