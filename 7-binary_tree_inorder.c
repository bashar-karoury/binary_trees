#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_inorder - goes through a binary tree using in-order traversal
* node of its parent's
* @tree: tree node pointer
* @func: pointer to function to be called for each node while traversing
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree) && (func))
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
