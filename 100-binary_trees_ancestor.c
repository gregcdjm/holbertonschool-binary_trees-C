#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_depth - find the depth of the tree
 * @tree: binary tree
 * Return: the depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}

/**
 * binary_trees_ancestor - find the common ancestor
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the common ancestor or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									const binary_tree_t *second)
{
	int first_depth = binary_tree_depth(first);
	int second_depth = binary_tree_depth(second);

	while (first_depth != second_depth)
	{
		if (first_depth > second_depth)
		{
			first = first->parent;
			first_depth = binary_tree_depth(first);
		}
		else
		{
			second = second->parent;
			second_depth = binary_tree_depth(second);
		}
	}
	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);

		second = second->parent;
		first = first->parent;
	}
	return (NULL);
}
