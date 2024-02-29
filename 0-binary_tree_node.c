#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_node - creates a binary tree node
* @parent: parent node pointer
* @value: int value to be stored in node
*
* Return: pointer to created node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *created_node = NULL;

	created_node = malloc(sizeof(binary_tree));
	if (created_node)
	{
		created_node->parent = parent;
		created_node->n = value;
	}
	return (created_node);
}

