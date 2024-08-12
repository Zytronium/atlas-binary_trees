#include "binary_trees.h"

/**
 * binary_tree_insert_left - creates a binary tree node
 *
 * @parent: the parent node of the node to create
 * @value: the value of n to put in the new node
 *
 * Return: pointer to the newly created node, or NULL if it failed
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	if (parent == NULL)
	{
		free(newNode);
		return (NULL);
	}

	/* if parent.left isnt null, its possible itll never be accessible again */
	parent->left = newNode;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->n = value;
	/* may be able to replace these 4 lines with binary_tree_node() if checker allows */

	return (newNode);
}
