#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 *
 * @parent: descri
 * @value: 		  ption
 *
 * Return: pointer to the newly created node, or NULL if it failed
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	return (newNode);
}
