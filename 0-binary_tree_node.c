#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 *
 * @parent: the parent node of the node to create
 * @value: the value of n to put in the new node
 *
 * Return: pointer to the newly created node, or NULL if it failed
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->n = value;

	return (newNode);
}
