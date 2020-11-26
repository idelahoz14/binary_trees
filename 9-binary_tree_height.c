#include "binary_trees.h"

/**
* binary_tree_height - function that measures the height of a binary tree
* @tree: pointer to the root node of the tree to measure the height
*
* Return: 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hight_left = 0;
	size_t hight_right = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}
	hight_left = binary_tree_height(tree->left) + 1;
	hight_right = binary_tree_height(tree->right) + 1;
	if (hight_left > hight_right)
	{
		return (hight_left);
	}
	return (hight_right);
}
