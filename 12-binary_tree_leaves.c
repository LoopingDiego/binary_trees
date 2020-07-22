#include "binary_trees.h"
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
