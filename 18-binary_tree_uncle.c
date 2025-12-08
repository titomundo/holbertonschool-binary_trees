#include "binary_trees.h"

/**
* binary_tree_uncle - returns the uncle of a node
* @node: node in binary_tree
*
* Return: pointer to uncle node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (0);

	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	else if (node->parent == node->parent->parent->right)
		return (node->parent->parent->left);
	else
		return (0);
}
