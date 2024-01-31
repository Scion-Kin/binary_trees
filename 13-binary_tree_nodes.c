#include "binary_trees.h"

size_t counter(const binary_tree_t *tree);

/**
 * binary_tree_nodes - counts the nodes with at least one child
 * @tree: the root node of the binary tree to test
 * Return: the number of nodes with at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;

    return counter(tree);
}

/**
 * counter - recursively counts the nodes with at least one child
 * @tree: the node to check
 * Return: the number of nodes with at least one child
 */
size_t counter(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;

    size_t count = (tree->left != NULL || tree->right != NULL) ? 1 : 0;

    count += counter(tree->left);
    count += counter(tree->right);

    return count;
}
