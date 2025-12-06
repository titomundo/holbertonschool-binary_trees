#include "binary_trees.h"

/**
* binary_tree_node - creates a binary tree node
* @parent: upper origin of node
* @value: value to store in node
*
* Return: pointer to the new node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (0);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
