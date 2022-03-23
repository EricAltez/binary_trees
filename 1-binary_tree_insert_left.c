#include "binary_trees.h"


/**
 *binary_tree_insert_left - inserts node as left-child of another node
 *@parent: pointer to the node to insert the left-child in
 *@value: value of new node
 *Return: pointer to new node or null
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *ch_node;

	if (!parent)
		return (NULL);
	ch_node = binary_tree_node(parent, value);
	if (parent->left == NULL)
	{
		parent->left = ch_node;
	}
	else
	{
		ch_node->left = parent->left;
		parent->left->parent = ch_node;
		parent->left = ch_node;
	}
return (ch_node);
}
