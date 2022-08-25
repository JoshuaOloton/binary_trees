#include "binary_trees.h"

/**
 * binary_tree_balance -  measures the balance factor of a binary tree
 * @tree:  pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int lheight = 0, rheight = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		lheight = binary_tree_balance(tree->left) + 1;
	if (tree->right)
		rheight = binary_tree_balance(tree->right) + 1;
	return (lheight - rheight);
}
