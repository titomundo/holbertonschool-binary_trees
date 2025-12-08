#include "binary_trees.h"

/**
* binary_tree_nodes - returns the amount of non leaf nodes
* @tree: tree to traversal
*
* Return: amount of nodes with at least one child
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int left_nodes, right_nodes;

	if (!tree)
		return (0);

	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);

	if (tree->left || tree->right)
		return (left_nodes + right_nodes + 1);
	else
		return (left_nodes + right_nodes);
}
