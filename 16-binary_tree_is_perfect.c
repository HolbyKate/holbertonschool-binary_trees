#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL
 *
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	return (0);
}
