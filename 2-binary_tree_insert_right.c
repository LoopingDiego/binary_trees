#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_insert_right - inserts a node as the right-child
 * of another node
 * @parent: The parent(branch) of the leaf to insert
 * @value: Ordinal value to insert in binary tree
 * Return: Pointer to the node inserted
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent)
		new_node = binary_tree_node(parent, value);
	else
		return (NULL);
	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
