#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
* array_to_bst - builds a Binary Search Tree from an array
* @array: array of values
* @size: size of array
*
* Return: pointer to the root node, Or NULL on failure
*/
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
			bst_insert(&tree, array[i]);
	}
	return (tree);
}

