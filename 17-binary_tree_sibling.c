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
