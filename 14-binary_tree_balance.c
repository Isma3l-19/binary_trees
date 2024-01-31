#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor
 * @tree: pointer to the root node
 * Return: 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL)
		left_height = 0;
	else
		left_height = 1 + ((int) binary_tree_height(tree->left));
	if (tree->right == NULL)
		right_height = 0;
	else
		right_height = 1 + ((int) binary_tree_height(tree->right));
	return (left_height - right_height);

}
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node
 * Return: 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (left_height > right_height ? left_height : right_height);
}
