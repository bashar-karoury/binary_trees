#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

void binary_tree_preorder_travers(const binary_tree_t *tree,
									int level, list_node_t **level_lists);
void add_back(list_node_t **head, binary_tree_t *node);
void free_list(list_node_t **level_lists);
/**
* binary_tree_levelorder - goes through a binary tree using level-order
* traversal node of its parent's
* @tree: tree node pointer
* @func: pointer to function to be called for each node while traversing
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{

	list_node_t **level_lists = NULL;
	list_node_t *trav_node = NULL;
	int i = 0;

	level_lists = malloc(sizeof(list_node_t *) * 100);
	if (level_lists == NULL)
		return;

	for (i = 0; i < 100; i++)
		level_lists[i] = NULL;

	binary_tree_preorder_travers(tree, 0, level_lists);

	for (i = 0; i < 100; i++)
	{
		trav_node = level_lists[i];
		while (trav_node)
		{
			if ((trav_node->node))
				func((trav_node->node)->n);
			trav_node = trav_node->next;
		}
	}
	free_list(level_lists);
}


void binary_tree_preorder_travers(const binary_tree_t *tree,
									int level, list_node_t **level_lists)
{
	add_back(&(level_lists[level]), (binary_tree_t *)tree);
	if ((tree))
	{
		++level;
		binary_tree_preorder_travers(tree->left,  level, level_lists);
		binary_tree_preorder_travers(tree->right, level, level_lists);
	}
}

/**
* add_back - add binary tree node to list
* @head: head node of list
* @node: binary tree node to be added
*/
void add_back(list_node_t **head, binary_tree_t *node)
{
	list_node_t *h = *head;
	list_node_t *new = NULL;

	new = malloc(sizeof(list_node_t));
	if (new == NULL)
		return;

	new->node = node;
	new->next = NULL;

	if (h == NULL)
	{
		*head = new;
	}
	else
	{
		while (h->next)
		{
			h = h->next;
		}
		h->next = new;
	}
}

/**
* free_list - frees list of binary tree nodes
* @level_lists: array of lists
*/
void free_list(list_node_t **level_lists)
{
	list_node_t *trav_node = NULL;
	list_node_t *free_node = NULL;
	int i = 0;

	for (i = 0; i < 100; i++)
	{
		trav_node = level_lists[i];
		while (trav_node)
		{
			free_node = trav_node;
			trav_node = trav_node->next;
			free(free_node);
		}
	}
	free(level_lists);
}
