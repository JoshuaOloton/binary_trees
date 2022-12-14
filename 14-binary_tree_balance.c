#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree:  pointer to the root node of the tree to measure the height.
 *
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight = 0, rheight = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left)
		lheight = binary_tree_height(tree->left) + 1;
	else
		lheight = 1;
	if (tree->right)
		rheight = binary_tree_height(tree->right) + 1;
	else
		rheight = 1;

	return (lheight > rheight ? lheight : rheight);
}

/**
 * binary_tree_balance -  measures the balance factor of a binary tree
 * @tree:  pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
