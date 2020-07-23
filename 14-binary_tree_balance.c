#include "binary_trees.h"
/**
 * binary_tree_balance - measures the tree balance
 * @tree: pointer to root
 * Return: balance of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int siz_left = 0;
	int siz_right = 0;

	if (!tree)
		return (0);
	if (tree->left)
	{
		siz_left = binary_tree_balance(tree->left);
		siz_left += 1;
	}
	if (tree->right)
	{
		siz_right = binary_tree_balance(tree->right);
		siz_right += 1;
	}
	if (!tree->parent)
		return (siz_left - siz_right);
	if (siz_left > siz_right)
		return (siz_left);
	else
		return (siz_right);
}
