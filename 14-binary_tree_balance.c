#include "binary_trees.h"

/**
 * binary_tree_balance - balance left or right ?
 *
 * @tree: the tree
 * Return: positive for left or negative for right otherwise 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t len_g = 0, len_d = 0;

	if (!tree)
		return (0);
	if (tree->left)
		len_g = binary_tree_height(tree->left) + 1;
	if (tree->right)
		len_d = binary_tree_height(tree->right) + 1;
	return (len_g - len_d);
}
