#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_full - returns eval of tree fullness
 * @tree: pointer to root
 * Return: 0 if not full, 1 on fullness
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int siz_left = 0;
	int siz_right = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
	{
		siz_left = binary_tree_is_full(tree->left);
		siz_left += 1;
		siz_right = binary_tree_is_full(tree->right);
		siz_right += 1;
	}
	return (siz_left == siz_right);	
}
