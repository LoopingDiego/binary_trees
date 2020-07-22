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
