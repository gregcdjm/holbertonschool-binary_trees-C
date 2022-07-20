#include "binary_trees.h"

/**
 * binary_tree_node - Binary create node
 *
 * @value: Integer stored in the node
 * @parent: Pointer to the parent node
 * Return: NULL or the son "fils"
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *fils;

	fils = malloc(sizeof(binary_tree_t));
	if (!fils)
		return (NULL);
	if (parent != NULL)
	{
		fils->parent = parent;
	}
	fils->left = NULL;
	fils->right = NULL;
	fils->n = value;
	return (fils);
}
