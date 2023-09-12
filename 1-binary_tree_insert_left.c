#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node as the left-child of another node
 * @parent: pointer to the parent node of the node to create
 * @value: the value to put in the new node
 *
 * Return: a pointer to the created node, NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t) * 1);
	if (parent == NULL)
	{
		return (NULL);
	}
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;
	return(new_node);
}
