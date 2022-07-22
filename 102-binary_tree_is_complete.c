#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: a pointer to the root node of the tree
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}

/**
 * iscomplete - function that check if the tree is complete
 * @tree: a pointer to the root node of the tree
 * @level: the level of the node
 * @size: number of nodes
 * Return: 0 if false, 1 if true
 */
int iscomplete(const binary_tree_t *tree, int level, int size)
{
	if (!tree)
		return (1);

	if (level >= size)
		return (0);

	return (iscomplete(tree->left, 2 * level + 1, size) &&
	iscomplete(tree->right, 2 * level + 2, size));
}

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: a pointer to the root node
 * Return: 1 if complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int size = binary_tree_size(tree);
	int level = 0;

	if (!tree)
		return (0);

	if (iscomplete(tree, level, size) == 0)
		return (0);
	return (1);
}
