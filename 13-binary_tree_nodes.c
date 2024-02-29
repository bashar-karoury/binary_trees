#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
* binary_tree_nodes - measures the tree nodes of a binary tree
* node of its parent's
* @tree: root tree node pointer
*
* Return: Count of tree nodes the tree
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	binary_tree_t *l = NULL;
	binary_tree_t *r = NULL;

	if (tree == NULL)
		return (0);

	if ((tree->left == NULL) && (tree->right == NULL))
		return (0);

	l = tree->left;
	r = tree->right;
	return (1 + binary_tree_nodes(l) + binary_tree_nodes(r));
}

