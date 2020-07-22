#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_is_leaf - cut down a binary tree
 * @tree: pointer to tree
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	else if (node->left || node->right)
		return (0);
	else
		return (1);
	
}