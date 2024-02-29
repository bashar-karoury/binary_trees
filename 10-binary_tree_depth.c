#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_depth - measures the depth of a binary tree node
* node of its parent's
* @tree: tree node pointer
*
* Return: depth of tree from the tree node
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = -1;

	if (tree == NULL)
		return (0);

	while (tree)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
