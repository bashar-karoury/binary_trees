#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

size_t max(int a, int b);
size_t binary_tree_height(const binary_tree_t *tree);

/**
* binary_tree_balance - measures the balance factor of a binary tree
* node of its parent's
* @tree: root tree node pointer
*
* Return: Balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	binary_tree_t *l = NULL;
	binary_tree_t *r = NULL;

	if (tree == NULL)
		return (0);
	l = tree->left;
	r = tree->right;
	return (binary_tree_height(l) - binary_tree_height(r));
}

/**
* binary_tree_height - measures the height of a binary tree
* node of its parent's
* @tree: tree node pointer
*
* Return: height of tree from the tree node
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	binary_tree_t *l = NULL;
	binary_tree_t *r = NULL;

	if (tree == NULL)
		return (0);

	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);
	l = tree->left;
	r = tree->right;
	return (max(binary_tree_height(l), binary_tree_height(r)) + 1);
}

/**
* max - get max of two numbers
* @a: first number
* @b: second number
*
* Return: the maximum of two
*/
size_t max(int a, int b)
{
	return (a >= b ? a : b);
}

