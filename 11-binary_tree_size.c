#include "binary_trees.h"
/**
 * binary_tree_size - measures the tree size
 * @tree: pointer to root
 * Return: size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);
	size = binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);
	size += 1;
	return (size);
}
