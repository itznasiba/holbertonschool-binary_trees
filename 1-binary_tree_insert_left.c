#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts new node to left
 * @parent: parent of node
 * @value: value of node
 *
 * Return: a pointer to the node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent = new->node;
	}

	parent->left = new->node;

	return (new->node);
}
