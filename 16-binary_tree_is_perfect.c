#include "binary_trees.h"

/**
 * _pow - returns the value of x to the power of y
 * @x: original number
 * @y: power
 *
 * Return: int
 */
int _pow(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x * y);

	return (x * _pow(x, y - 1));
}

/**
* binary_tree_height - gets the maximum height of a binary tree
* @tree: tree to check
*
* Return: maximum height of tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int right_h, left_h, max;

	if (!tree)
		return (-1);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	if (left_h > right_h)
		max = left_h;
	else
		max = right_h;

	return (max + 1);
}

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

/**
* binary_tree_is_perfect - checks if a binary tree is perfect
* @tree: tree to traversal
*
* Return: 1 if perfect, 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth, n_goal, n;

	if (!tree)
		return (0);

	depth = binary_tree_height(tree);
	n = binary_tree_size(tree);

	n_goal = _pow(2, depth + 1) - 1;

	if (n == n_goal)
		return (1);
	else
		return (0);
}
