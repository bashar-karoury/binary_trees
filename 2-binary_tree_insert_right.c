#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_insert_right - creates a binary tree node as the right
* node of its parent's
* @parent: parent node pointer
* @value: int value to be stored in node
*
* Return: pointer to created node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *created_node = NULL;
	binary_tree_t *parents_right = NULL;

	if (parent)
	{
		parents_right = parent->right;
		created_node = malloc(sizeof(binary_tree_t));
		if (created_node)
		{
			created_node->parent = parent;
			created_node->n = value;
			parent->right = created_node;

			/* Check parents' right*/
			if (parents_right)
			{
				created_node->right = parents_right;
				parents_right->parent = created_node;
			}
			else
				created_node->right = NULL;
			created_node->left = NULL;
		}
	}
	return (created_node);
}

