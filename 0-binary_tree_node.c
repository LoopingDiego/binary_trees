#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_node - insert a binary tree node
 * @parent: The parent(branch) of the leaf to insert
 * @tree: Pointer to the root node of the tree to print
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}