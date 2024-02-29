#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
* binary_trees_ancestor - finds the lowest common ancestor of two nodes
* node of its parent's
* @first: pointer to the first node
* @second: pointer to the second node
* Return: pointer to the lowest common ancestor Or NULL if not found
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									const binary_tree_t *second)
{
	binary_tree_t *lca = NULL;
	const binary_tree_t *f = NULL;
	const binary_tree_t *s = NULL;

	if (first && second)
	{
		/* starting from first and loop to traverse to its root*/
		f = first;
		while (f)
		{
			/*loop from second to its root*/
			s = second;
			while (s)
			{
				if (s == f)
				{
					lca = (binary_tree_t *)s;
					return (lca);
				}
				s = s->parent;
			}
			f = f->parent;
		}

	}
	return (lca);
}

