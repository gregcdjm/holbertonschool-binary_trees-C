#include "binary_trees.h"

/**
 * binary_tree_postorder - goes throught the binary tree using post-order
 *
 * @tree: to go
 * @func: func to print n
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
