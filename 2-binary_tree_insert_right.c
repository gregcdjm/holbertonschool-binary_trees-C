#include "binary_trees.h"

/**
 * binary_tree_insert_right - Binary create node
 *
 * @value: Integer stored in the node
 * @parent: Pointer to the parent node
 * Return: NULL or the son "fils"
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *fils;

	if (parent == NULL)
		return (NULL);
	fils = binary_tree_node(parent, value);
	if (parent->right != NULL)
	{
		fils->right = parent->right;
		parent->right->parent = fils;
	}
	parent->right = fils;
	return (fils);
}
