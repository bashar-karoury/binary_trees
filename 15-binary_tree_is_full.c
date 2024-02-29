#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
* binary_tree_is_full - checks if a binary tree is full
* node of its parent's
* @tree: root tree node pointer
*
* Return: 1 if tree is full, 0 if not full or tree is NULL
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	binary_tree_t *l = NULL;
	binary_tree_t *r = NULL;

	if (tree == NULL)
		return (0);

	if ((tree->left == NULL) ^ (tree->right == NULL))
		return (0);

	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);

	l = tree->left;
	r = tree->right;
	return (1 && binary_tree_is_full(l) && binary_tree_is_full(r));
}

