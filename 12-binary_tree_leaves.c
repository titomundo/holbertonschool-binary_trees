#include "binary_trees.h"

/**
* binary_tree_leaves - returns the number of leaves in a binary tree
* @tree: tree to traversal
*
* Return: number of leaves in the tree
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int left_leav, right_leav;

	if (!tree)
		return (0);

	left_leav = binary_tree_leaves(tree->left);
	right_leav = binary_tree_leaves(tree->right);

	if (!tree->left && !tree->right)
		return (left_leav + right_leav + 1);
	else
		return (left_leav + right_leav);
}
