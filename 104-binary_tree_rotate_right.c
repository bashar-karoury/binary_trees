#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
* binary_tree_rotate_right - performs a right-rotation on a binary tree
* node of its parent's
* @tree: tree node pointer
*
* Return: new root of tree
*/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *left = NULL;
	binary_tree_t *right_of_left = NULL;

	if (tree)
	{
		left = tree->left;
		if (left)
		{
			right_of_left = left->right;
			left->right = tree;
			tree->parent = left;
			tree->left = right_of_left;
			left->parent = NULL;
			if (right_of_left)
				right_of_left->parent = tree;
		}
	}
	return (left);
}

