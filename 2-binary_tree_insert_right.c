#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_insert_right - creates a binary tree node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return:  pointer to the created node, or
 * NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);
	node = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right->parent = node;

	}
	parent->right = node;

	return (node);
}
