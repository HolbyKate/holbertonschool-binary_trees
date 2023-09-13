#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as the right-child of another node
 * @parent: pointer to the parent node of the node to create
 * @value: the value to put in the new node
 *
 * Return: a pointer to the created node, NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		new_node->right = parent->left;
		parent->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
