#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_is_root - checks if a given node is a root
* node of its parent's
* @node: tree node pointer
*
* Return: 1 if node is leaf, 0 otherwise or NULL
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node)
	{
		if (node->parent == NULL)
			return (1);
	}
	return (0);
}
