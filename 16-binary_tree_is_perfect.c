#include "binary_trees.h"
#include <stdlib.h>
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
 * binary_tree_is_perfect - returns eval of tree perfectness
 * @tree: pointer to root
 * Return: 0 if not perfect, 1 on perfectness
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height_left = 0;
	int height_right = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
	{
		height_left = binary_tree_height(tree->left);
		if (tree->left && tree->right)
			height_left += 1;
		height_right = binary_tree_height(tree->right);
		if (tree->left && tree->right)
			height_right += 1;
	}
	return (height_left == height_right);
}
