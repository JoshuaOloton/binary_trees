#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree:  pointer to the root node of the tree to measure the height.
 *
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight, rheight;

	if (tree == NULL)
	{
		return (-1);
	}
	else
	{
		lheight = binary_tree_height(tree->left) + 1;
		rheight = binary_tree_height(tree->right) + 1;

		if (lheight > rheight)
			return (lheight);
		return (rheight);
	}
}
