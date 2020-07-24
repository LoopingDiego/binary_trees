#include "binary_trees.h"
#include "binary_trees.h"
/**
 * binary_tree_sibling - returns a pointer to sibling
 * @node: Children who's looking for his sibling
 * Return: The sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->right == node)
		if (node->parent->left)
			return (node->parent->left);
		else
			return (NULL);
	else
	{
		if (node->parent->right)
			return (node->parent->right);
		else
			return (NULL);
	}
}

/**
 * binary_tree_uncle - returns a pointer to uncle
 * @node: Children who's looking for his uncle
 * Return: The uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent->parent)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
