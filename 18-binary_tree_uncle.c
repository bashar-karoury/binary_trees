#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
* binary_tree_uncle -  finds the uncle of a node
* node of its parent's
* @node: root tree node pointer
*
* Return: uncle node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *u = NULL;
	binary_tree_t *p = NULL;
	binary_tree_t *gp = NULL;


	if (node)
	{
		p = node->parent;
		if (p)
		{
			gp = p->parent;
			if (gp)
			{
				u = (p == gp->left ?  gp->right : gp->left);
			}
		}
	}
	return (u);
}

