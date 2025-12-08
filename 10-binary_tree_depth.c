#include "binary_trees.h"

/**
* binary_tree_depth - gets the depth of a node
* @tree: tree to check
*
* Return: maximum height of tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth;

	if (!tree || tree->parent == NULL)
		return (0);

	depth = binary_tree_depth(tree->parent);

	return (depth + 1);
}
