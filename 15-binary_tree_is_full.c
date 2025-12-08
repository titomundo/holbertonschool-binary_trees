#include "binary_trees.h"

/**
* binary_tree_is_full - checks if a binary tree is full
* @tree: tree to traversal
*
* Return: 1 if full, 0 otherwise
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_n, right_n, aux;

	if (!tree)
		return (0);

	left_n = binary_tree_is_full(tree->left);
	right_n = binary_tree_is_full(tree->right);

	aux = left_n + right_n;

	if ((aux == 2) || (aux == 0))
		return (1);
	else
		return (0);
}
