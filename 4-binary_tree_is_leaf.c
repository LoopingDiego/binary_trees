#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_is_leaf - check if node is leaf
 * @node: node to check
 * Return: 0 if is no leaf, 1 if is leaf
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
