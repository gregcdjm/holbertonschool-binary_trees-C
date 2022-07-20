#include "binary_trees.h"

/**
 * binary_tree_is_leaf - leaf or not leaf
 *
 * @node: node
 * Return: 1 if node is a leaf otherwhise 0, if node is null re=O
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && !(node->right || node->left))
		return (1);
	return (0);
}
