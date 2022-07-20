#include "binary_trees.h"

/**
 * binary_tree_height - how height ?
 *
 * @tree: the tree
 * Return: the height of the tree otherwise 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t len_g = 0, len_d = 0;

	if (!tree)
		return (0);
	if (tree->left)
		len_g = binary_tree_height(tree->left) + 1;
	if (tree->right)
		len_d = binary_tree_height(tree->right) + 1;
	if (len_d > len_g)
		return (len_d);
	return (len_g);
}
