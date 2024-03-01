#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
* binary_tree_rotate_left - performs a left-rotation on a binary tree
* node of its parent's
* @tree: tree node pointer
*
* Return: new root of tree
*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *right = NULL;
	binary_tree_t *left_of_right = NULL;

	if (tree)
	{
		right = tree->right;
		if (right)
		{
			left_of_right = right->left;
			printf("left of right = %p\n", (void *)left_of_right);
			right->left = tree;
			tree->parent = right;
			tree->right = left_of_right;
			right->parent = NULL;
			
			if (left_of_right)
				left_of_right->parent = tree;
		}
		
	}
	return (right);
}

