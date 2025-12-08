#include "binary_trees.h"

/**
* binary_tree_size - returns the size of a binary tree
* @tree: root of tree to traversal
*
* Return: total amount of nodes in the tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	int right_len, left_len;

	if (!tree)
		return (0);

	left_len = binary_tree_size(tree->left);
	right_len = binary_tree_size(tree->right);

	return (left_len + right_len + 1);
}
