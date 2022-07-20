#include "binary_trees.h"

/**
 * binary_tree_delete - Binary create node
 *
 * @tree: tree to delete
 */

void binary_tree_delete(binary_tree_t *tree)
{
        if (tree)
	{
		if (tree->right)
		{
			tree=tree->right;
			binary_tree_delete(tree->right),binary_tree_print(tree);
		}
		if (tree->left)
		{
			tree = tree->left;
			binary_tree_delete(tree->left),binary_tree_print(tree);
		}
//		if (tree->parent != NULL)
			//	free(tree);

	}
}
