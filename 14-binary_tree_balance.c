#include "binary_trees.h"

/**
 * binary_tree_heig - how height ?
 *
 * @tree: the tree
 * Return: the height of the tree otherwise 0.
 */
size_t binary_tree_heig(const binary_tree_t *tree)
{
	size_t len_g = 0, len_d = 0;

	if (!tree)
		return (0);
	if (tree->left)
		len_g = binary_tree_heig(tree->left) + 1;
	if (tree->right)
		len_d = binary_tree_heig(tree->right) + 1;
	return (len_d);
}

/**
 * binary_tree_heigh - how height ?
 *
 * @tree: the tree
 * Return: the height of the tree otherwise 0.
 */
size_t binary_tree_heigh(const binary_tree_t *tree)
{
	size_t len_g = 0, len_d = 0;

	if (!tree)
		return (0);
	if (tree->left)
		len_g = binary_tree_heigh(tree->left) + 1;
	if (tree->right)
		len_d = binary_tree_heigh(tree->right) + 1;
	return (len_g);
}

/**
 * binary_tree_balance - balance left or right ?
 *
 * @tree: the tree
 * Return: positive for left or negative for right otherwise 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	return (binary_tree_heigh(tree) - binary_tree_heig(tree));
}
