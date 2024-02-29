#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_insert_left - creates a binary tree node as the left
* node of its parent's
* @parent: parent node pointer
* @value: int value to be stored in node
*
* Return: pointer to created node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *created_node = NULL;
	binary_tree_t *parents_left = NULL;

	if (parent)
	{
		parents_left = parent->left;
		created_node = malloc(sizeof(binary_tree_t));
		if (created_node)
		{
			created_node->parent = parent;
			created_node->n = value;
			parent->left = created_node;

			/* Check parents' left*/
			if (parents_left)
				created_node->left = parents_left;
			else
				created_node->left = NULL;
			created_node->right = NULL;
		}
	}
	return (created_node);
}

