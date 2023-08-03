#include "binary_trees.h"
/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int check_left = 0;
	int check_right = 0;

	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if ((tree->left && !tree->right) || (!tree->left && tree->right))
		return (0);
	check_left = binary_tree_is_full(tree->left);
	check_right = binary_tree_is_full(tree->right);
	return (check_right * check_left);
}
