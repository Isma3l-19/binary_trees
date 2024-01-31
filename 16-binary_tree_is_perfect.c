#include "binary_trees.h"
/**
 * traverse_node - crawl a binary tree
 * @tree: pointer to the root node
 * Return: 0
 */
int traverse_node(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->right != NULL && tree->left != NULL)
		return (1 + traverse_node(tree->right) + traverse_node(tree->left));
	return (0);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to root node
 * Return: 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (!tree)
		return (0);

	left_height = traverse_node(tree->left);
	right_height = traverse_node(tree->right);

	if (left_height == right_height)
		return (1);
	else
		return (0);
}
