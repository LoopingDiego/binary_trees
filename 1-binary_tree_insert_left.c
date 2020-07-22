#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_insert_left - inserts a node as the left-child
 * of another node
 * @parent: The parent(branch) of the leaf to insert
 * @value: Ordinal value to insert in binary tree
 * Return: Pointer to the node inserted
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = binary_tree_node(parent, value);
	if (!new_node || !parent)
		return (NULL);
	else if (parent->left)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}
