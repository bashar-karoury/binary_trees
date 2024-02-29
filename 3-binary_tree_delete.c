#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_delete - deletes entire tree
* node of its parent's
* @tree: tree node pointer
*/
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *right = NULL;
	binary_tree_t *left = NULL;

	if (tree == NULL)
		return;

	/* Get node's right and left pointers before deleting it*/
	right = tree->right;
	left = tree->left;
	free(tree);
	binary_tree_delete(right);
	binary_tree_delete(left);
}

