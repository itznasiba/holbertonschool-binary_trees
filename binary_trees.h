#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdlib.h>

typedef struct binary_tree_t
{
	int value;
	struct binary_tree_t *parent;
	struct binary_tree_t *left;
	struct binary_tree_t *right;
}binary_tree_t;

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

#endif /*BINARY_TREES_H*/
