#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
* binary_tree_sibling -  finds the sibling of a node
* node of its parent's
* @node: root tree node pointer
*
* Return: Sibling node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *s = NULL;
	binary_tree_t *p = NULL;


	if (node)
	{
		p = node->parent;
		if (p)
		{
			s = (node == p->left ?  p->right : p->left);
		}
	}
	return (s);
}

