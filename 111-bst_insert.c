#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
* bst_insert - Inserts a value in a Binary Search Tree
* @tree: double pointer to the root tree node
* @value: value to be inserted
* Return: pointer to the newly inserted node
*/
bst_t *bst_insert(bst_t **tree, int value)
{
	binary_tree_t *new = NULL;
	binary_tree_t *trav = NULL;
	binary_tree_t *parent = NULL;

	if (tree)
	{
		if (*tree == NULL)
		{
			new  = binary_tree_node(NULL, value);
			*tree = new;
		}
		else
		{
			trav = *tree;
			while (trav)
			{
				if (value == trav->n)
				{
					return (NULL);
				}
				else if (value > trav->n)
				{
					parent = trav;
					trav = trav->right;
				}
				else
				{
					parent = trav;
					trav = trav->left;
				}
			}
			new  = binary_tree_node(parent, value);
			if (value > parent->n)
				parent->right = new;
			else
				parent->left = new;
		}
	}
	return (new);
}

