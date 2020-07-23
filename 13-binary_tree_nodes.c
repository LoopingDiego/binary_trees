#include "binary_trees.h"
/**
 * binary_tree_nodes - count the nodes with children
 * @tree: pointer to root
 * Return: all mother nodes (with children)
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t child = 0;

	if (!tree)
		return (0);
	child += binary_tree_nodes(tree->left);
	child += binary_tree_nodes(tree->right);
	if (tree->right || tree->left)
		child += 1;
	return (child);
}
