#include "binary_trees.h"
/**
 * binary_tree_depth - depth of a binary tree
 * @tree: the depth.
 * Return: the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	if (tree->parent)
		depth = 1 + binary_tree_depth(tree->parent);

	return (depth);
}

/**
 * binary_trees_ancestor - ancestor of two nodes
 * @first: first node
 * @second: second node
 * Return: ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	size_t depth_first = binary_tree_depth(first);
	size_t depth_second = binary_tree_depth(second);

	if (!first || !second)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	if (depth_first < depth_second)
		return (binary_trees_ancestor(first, second->parent));

	else if (depth_first > depth_second)
		return (binary_trees_ancestor(first->parent, second));

	return (binary_trees_ancestor(first->parent, second->parent));
}
