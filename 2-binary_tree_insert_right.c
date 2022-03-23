#include "binary_trees.h"


/**
 *binary_tree_insert_right - inserts node as left-child of another node
 *@parent: pointer to the node to insert the left-child in
 *@value: value of new node
 *Return: pointer to new node or null
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *ch_node;

	if (!parent)
		return (NULL);
	ch_node = binary_tree_node(parent, value);
	if (parent->right == NULL)
	{
		parent->right = ch_node;
	}
	else
	{
		ch_node->right = parent->right;
		parent->right->parent = ch_node;
		parent->right = ch_node;
	}
return (ch_node);
}
