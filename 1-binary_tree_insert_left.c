#include "binary_trees.h"

/**
 * binary_tree_insert_left - Binary create node
 *
 * @value: Integer stored in the node
 * @parent: Pointer to the parent node
 * Return: NULL or the son "fils"
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *fils;

	if (parent == NULL)
		return (NULL);
	fils = binary_tree_node(parent, value);
	if (parent->left != NULL)
	{
		fils->left = parent->left;
		parent->left->parent = fils;
	}
	parent->left = fils;
	return (fils);
}
