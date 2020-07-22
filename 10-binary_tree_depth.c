#include "binary_trees.h"
/**
 * binary_tree_depth - measures the tree depth
 * @tree: pointer to root
 * Return: depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);
	if (tree->parent)
	{
		depth = binary_tree_depth(tree->parent);
		depth += 1;
	}
	return (depth);
}
