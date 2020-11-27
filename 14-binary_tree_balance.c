#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: 0
 */
int binary_tree_height_1(const binary_tree_t *tree)
{

	int count = 0, count2 = 0;

	if (tree == NULL)
	{
		return (-1);
	}
	if (tree->left != NULL || tree->right != NULL)
	{
		count = binary_tree_height_1(tree->left) + 1;
		count2 = binary_tree_height_1(tree->right) + 1;
	}
	if (count > count2)
	{
		return (count);
	}

	return (count2);
}

/**
 * binary_tree_balance - function that counts the node with childs
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: the count of the nodes
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (binary_tree_height_1(tree->left) - binary_tree_height_1(tree->right));
}
