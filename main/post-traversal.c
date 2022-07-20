#include "binary_trees.h"

/**
 * binary_tree_preorder - goes throught the binary tree using pre-order
 *
 * @tree: tree to delete
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree)
	{
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
		func(tree->n);
	}
}
