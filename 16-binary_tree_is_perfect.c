#include "binary_trees.h"

/**
 * check_tree - check the tree
 * @tree: binary tree
 * Return: 0 or 1
 */
size_t check_tree(const binary_tree_t *tree)
{
	size_t check_l = 0, check_r = 0;

	if (!tree)
		return (0);

	check_l = check_tree(tree->left);
	check_r = check_tree(tree->right);

	if (!tree->left && !tree->right)
		return (1);
	if (check_l == check_r)
		return (check_l + check_r);
	return (0);
}

/**
 * binary_tree_is_perfect - check if the tree is perfect
 * @tree: the tree
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (check_tree(tree))
		return (1);
	return (0);
}
