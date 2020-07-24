#include "binary_trees.h"
/**
 * binary_tree_height - measures the tree height
 * @tree: pointer to root
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t siz_left = 0;
	size_t siz_right = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
	{
		siz_left = binary_tree_height(tree->left);
		siz_left += 1;
		siz_right = binary_tree_height(tree->right);
		siz_right += 1;
	}
	if (siz_left > siz_right)
		return (siz_left);
	else
		return (siz_right);
}
/**
 * binary_tree_leaves - count the leaves
 * @tree: pointer to root
 * Return: leaves of the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);
	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);
	if (!tree->right && !tree->left)
		leaves += 1;
	return (leaves);
}
/**
 * binary_tree_is_perfect - returns eval of tree perfectness
 * @tree: pointer to root
 * Return: 0 if not perfect, 1 on perfectness
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);
	size_t left_leaves = binary_tree_leaves(tree->left);
	size_t right_leaves = binary_tree_leaves(tree->right);

	if (!tree)
		return (0);
	if (left_height != right_height)
		{
		return (0);
		}
	else if (left_leaves != right_leaves)
		{
		return (0);
		}
	else if ((left_leaves + right_leaves) % 2 != 0)
		{
		return (0);
		}
	return (1);
}
