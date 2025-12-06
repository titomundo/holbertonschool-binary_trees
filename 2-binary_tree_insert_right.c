#include "binary_trees.h"

/**
* binary_tree_insert_right - inserts a a new node to the right
* @parent: node to insert into
* @value: value for the new node
*
* Return: pointer to the new value
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	if (parent->right)
	{
		parent->right->parent = new;
		new->right = parent->right;
	}
	else
		new->right = NULL;

	parent->right = new;

	return (new);
}
