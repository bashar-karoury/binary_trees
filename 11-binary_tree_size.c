#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

size_t max(int a, int b);

/**
* binary_tree_size - measures the size of a binary tree
* node of its parent's
* @tree: tree node pointer
*
* Return: size of tree from the tree node
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	binary_tree_t *l = NULL;
	binary_tree_t *r = NULL;

	if (tree == NULL)
		return (0);

	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);

	l = tree->left;
	r = tree->right;
	return (binary_tree_size(l) + binary_tree_size(r) + 1);
}

