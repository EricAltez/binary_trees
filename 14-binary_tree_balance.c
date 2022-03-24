#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the binary tree.
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (height_left > height_right)
	{
		return (height_left + 1);
	}
	else
	{
		return (height_right + 1);
	}
}

/**
* binary_tree_balance - function that measures the balance factor
*						of a binary tree.
*
*@tree: pointer to the root node of the tree to measure the balance factor.
*
* Return: returns the balance factor.
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int count_left;
	int count_right;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
	{	count_left = binary_tree_height(tree->left);
	}
	else
	{
		count_left = -1;
	}

	if (tree->right != NULL)
	{
		count_right = binary_tree_height(tree->right);
	}
	else
	{
		count_right = -1;
	}

	return (count_left - count_right);
}
