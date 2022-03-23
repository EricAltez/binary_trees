#include "binary_trees.h"


/**
 *binary_tree_preorder - goes through a binary tree using pre-order traversal
 *@tree: pointer to the tree root node
 *@func: function to call each node
 *Return: 1 if leaf or 0
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}