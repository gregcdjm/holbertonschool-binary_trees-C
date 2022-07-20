#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 0);
    root->left = binary_tree_node(root, 1);
    root->right = binary_tree_node(root, 2);
    binary_tree_insert_right(root, 4);
    binary_tree_insert_left(root->left, 3);
    binary_tree_insert_right(root, 6);
    binary_tree_insert_left(root->right, 5);
    printf("original : \n\n");
    binary_tree_print(root);
    binary_tree_delete(root);
    return (0);
}
