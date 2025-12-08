#include "binary_trees.h"

/**
* binary_tree_sibling - returns the sibling of a node
* @node: node in binary tree
*
* Return: pointer to sibling node or null on failure
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (0);

	if (node == node->parent->left)
		return (node->parent->right);
	else if (node == node->parent->right)
		return (node->parent->left);
	else
		return (0);
}
