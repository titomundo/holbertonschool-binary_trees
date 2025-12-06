#include "binary_trees.h"

/**
* binary_tree_insert_left - inserts a a new node to the left
* @parent: node to insert into
* @value: value for the new node
*
* Return: pointer to the new value
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (0);

	new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (0);

	new->n = value;
	new->parent = parent;
	new->right = NULL;

	if (parent->left)
	{
		parent->left->parent = new;
		new->left = parent->left;
	}

	parent->left = new;

	return (new);
}
