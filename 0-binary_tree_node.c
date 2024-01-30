#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: the parent to link to the created node
 * @value: the value the node will contain
 * Return: the created node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->right = NULL;
	new->left = NULL;

	return (new);
}
