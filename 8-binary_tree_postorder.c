#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_postorder - goes through a binary tree using post-order traversal
* node of its parent's
* @tree: tree node pointer
* @func: pointer to function to be called for each node while traversing
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree) && (func))
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
