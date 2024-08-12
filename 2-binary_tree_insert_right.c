#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *
 * @parent: the parent node of the node to create
 * @value: the value of n to put in the new node
 *
 * Return: pointer to the newly created node, or NULL if it failed
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	if (parent == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->parent = parent;
	newNode->right = parent->right;
	newNode->left = NULL;
	newNode->n = value;
	parent->right = newNode;
	if (newNode->right != NULL)
		newNode->right->parent = newNode;

	return (newNode);
}
