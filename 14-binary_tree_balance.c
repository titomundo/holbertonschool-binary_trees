#include "binary_trees.h"

/**
* binary_tree_height - gets the maximum height of a binary tree
* @tree: tree to check
*
* Return: maximum height of tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int right_h, left_h, max;

	if (!tree)
		return (-1);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	if (left_h > right_h)
		max = left_h;
	else
		max = right_h;

	return (max + 1);
}

/**
* binary_tree_balance - returns the balance factor of a tree
* @tree: tree to traversal
*
* Return: balance factor of a binary tree
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_bal, right_bal, diff;

	if (!tree)
		return (0);

	left_bal = binary_tree_height(tree->left);
	right_bal = binary_tree_height(tree->right);

	diff = left_bal - right_bal;

	return (diff);
}
