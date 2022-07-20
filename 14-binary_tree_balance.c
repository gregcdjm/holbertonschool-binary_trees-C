#include "binary_trees.h"

/**
 * binary_tree_balance - balance left or right ?
 *
 * @tree: the tree
 * Return: positive for left or negative for right otherwise 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
		if (tree->right)
			return (binary_tree_balance(tree->right) - 1);
		if (tree->left)
			return (binary_tree_balance(tree->left) + 1);
		return (0);
}
