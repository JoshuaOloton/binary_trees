#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_insert_left - creates a binary tree node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return:  pointer to the created node, or
 * NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	printf("1\n");
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL || parent == NULL)
		return (NULL);
	node->n = value;
	node->right = NULL;
	printf("1\n");
	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left->parent = node;

	}
	else
	{
		node->left = NULL;
	}
	printf("1\n");
	node->parent = parent;
	parent->left = node;

	return (node);
}
