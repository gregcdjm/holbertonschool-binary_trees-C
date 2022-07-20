#include "binary_trees.h"

/**
 * binary_tree_depth - how depth ?
 *
 * @tree: the tree
 * Return: the depth the tree otherwise 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t len_g = 0;

	if (!tree)
		return (0);
	if (tree->parent)
		len_g = binary_tree_depth(tree->parent) + 1;
	return (len_g);
}
