#include "binary_trees.h"

/**
 * binary_tree_size - how size ?
 *
 * @tree: the tree
 * Return: the size of the tree otherwise 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
        if(tree == 0)
		return 0;
        else
		return (1+ binary_tree_size(tree->left)
			+ binary_tree_size(tree->right));
}
