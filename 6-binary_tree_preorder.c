#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_preorder - goes through a binary tree using pre-order traversal
* node of its parent's
* @tree: tree node pointer
* @func: pointer to function to be called for each node while traversing
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree) && (func))
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
