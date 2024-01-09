#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: the height of a binary tree, 0 if tree is null
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	else
	{
		height_left = binary_tree_height(tree->left);
		height_right = binary_tree_height(tree->right);

		if (height_left > height_right)
			return (height_left + 1);
		else
			return (height_right + 1);
	}
}
