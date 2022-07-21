#include "binary_trees.h"

/**
 * binary_tree_is_full - check if the tree is full
 * @tree: the tree
 * Return: 0 or 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if ((!tree->left || !tree->right) && (tree->left || tree->right))
		return (0);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));

	return (1);
}
