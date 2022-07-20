#include "binary_trees.h"

/**
 * binary_tree_nodes - how many parent ?
 *
 * @tree: the tree
 * Return: the number of parent of the tree otherwise 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	else
		return (binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right) + 1);
}
