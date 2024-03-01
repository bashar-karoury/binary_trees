#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

int check_if_less(binary_tree_t *tree, int value);
int check_if_greater(binary_tree_t *tree, int value);

/**
* binary_tree_is_bst - checks if a binary tree is binary search tree
* @tree: root tree node pointer
*
* Return: 1 if tree is bst, 0 if not full or tree is NULL
*/
int binary_tree_is_bst(const binary_tree_t *tree)
{
	binary_tree_t *l = NULL;
	binary_tree_t *r = NULL;
	int l_result = 1;
	int r_result = 1;

	if (tree == NULL)
		return (0);

	if ((tree->right == NULL) && (tree->left == NULL))
		return (1);

	if (!check_if_less((binary_tree_t *)tree->right, tree->n))
		return (0);
	if (!check_if_greater((binary_tree_t *)tree->left, tree->n))
		return (0);
	l = tree->left;
	r = tree->right;
	if (l)
		l_result = binary_tree_is_bst(l);
	if (r)
		r_result = binary_tree_is_bst(r);

	return (1 && l_result && r_result);
}

/**
* check_if_less - check littleness of all nodes of tree against value
* @tree: pointer to binary tree node
* @value: value to check against
*
* Return: 1 if is all nodes of tree is less than value
*/
int check_if_less(binary_tree_t *tree, int value)
{
	binary_tree_t *l = NULL;
	binary_tree_t *r = NULL;

	if (tree == NULL)
		return (1);
	if (tree->n <= value)
		return (0);

	l = tree->left;
	r = tree->right;
	return (1 && check_if_less(l, value) && check_if_less(r, value));
}

/**
* check_if_greater - check greatness of all nodes of tree against value
* @tree: pointer to binary tree node
* @value: value to check against
*
* Return: 1 if is all nodes of tree is greater than value
*/
int check_if_greater(binary_tree_t *tree, int value)
{
	binary_tree_t *l = NULL;
	binary_tree_t *r = NULL;

	if (tree == NULL)
		return (1);


	if (tree->n >= value)
		return (0);

	l = tree->left;
	r = tree->right;
	return (1 && check_if_greater(l, value) && check_if_greater(r, value));
}
