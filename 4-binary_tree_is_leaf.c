#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_is_leaf - deletes an entire binary tree
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a leaf, otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);
	return (1);
}
