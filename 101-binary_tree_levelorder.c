#include "binary_trees.h"

void print_level(const binary_tree_t *tree, size_t level, void (*func)(int));
size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: the height of a binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (!tree)
		return (0);

	height_left = 1 + binary_tree_height(tree->left);
	height_right = 1 + binary_tree_height(tree->right);

	if (height_left < height_right)
		return (height_right);

	return (height_left);
}

/**
 * print_level - function that print every node of 1 level
 * @tree: a pointer to the root node of the tree to traverse
 * @level: level of the tree
 * @func: a pointer to a function to call for each node
 * Return: None
 */
void print_level(const binary_tree_t *tree, size_t level, void (*func)(int))
{
	if (!tree || !func)
		return;
	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		print_level(tree->left, level - 1, func);
		print_level(tree->right, level - 1, func);
	}
}
/**
 * binary_tree_levelorder - using level-order
 * traversal
 * @tree: the tree to traverse
 * @func:  to call for each node
 * Return: None
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	{
	size_t height = binary_tree_height(tree);
	size_t level;

	if (!tree || !func)
		return;

	for (level = 1; level <= height; level++)
		print_level(tree, level, func);
	}
}
