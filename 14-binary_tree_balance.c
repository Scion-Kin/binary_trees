#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);

/**
 *
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	if (!tree->left || !tree->right)
	{
		if (tree->left)
			return (1);
		if (tree->right)
			return (-1);
	}

	if (tree->left && tree->right)
	{
		if (binary_tree_is_full(tree))
			return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}

	return (0);
}

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

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: the tree to measure
 * Return: the size of the tree, or 0 if failure
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	const binary_tree_t *current = tree;
	size_t count = 0;

	if (tree == NULL)
		return (0);

	while (current->left || current->right)
	{
		if (current->left && (current->left->left || current->left->right))
		{
			count++;
			current = current->left;
		}

		else if (current->right && (current->right->left || current->right->right))
		{
			count++;
			current = current->right;
		}
		else if (current->right)
		{
			count++;
			current = current->right;
		}
		else if (current->left)
		{
			count++;
			current = current->left;
		}
		else
			return (0);
	}

	return (count);
}
