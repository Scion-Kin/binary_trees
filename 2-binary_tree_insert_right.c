#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node on the right side of a tree
 * @parent: the list (tree) for the nsertion
 * @value: the value to be inserted in a node
 * Return: the list containing the inserted value
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->right = parent->right;
	new->left = NULL;
	if (parent->right)
		parent->right->parent = new;
	parent->right = new;

	return (new);
}
