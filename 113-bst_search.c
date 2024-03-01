#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
* bst_search - searches for a value in a Binary Search Tree
* @tree: pointer to the root node
* @value: value to be searched for
*
* Return: pointer to the node containing the value equals to @value
*/
bst_t *bst_search(const bst_t *tree, int value)
{
	binary_tree_t *trav = NULL;

	if (tree)
	{
		trav = (bst_t *)tree;
		while (trav)
		{
			if (value == trav->n)
			{
				return (trav);
			}
			else if (value > trav->n)
			{
				trav = trav->right;
			}
			else
			{
				trav = trav->left;
			}
		}
	}
	return (trav);
}

