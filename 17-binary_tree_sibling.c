#include "binary_trees.h"

/**
 * binary_tree_sibling - Write a function that finds the sibling of a node
 * @node: node to find is sibling (brother)
 * Return: the bigbro
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node || node->parent == NULL)
		return (NULL);

	parent = node->parent;

	if (parent->left == node)
	{
		return (parent->right);
	}
	else
	{
		return (parent->left);
	}
}
