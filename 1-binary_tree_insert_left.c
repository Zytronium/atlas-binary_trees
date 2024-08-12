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
	if (parent == NULL)
		return (NULL);

	/* if parent.left isnt null, its possible itll never be accessible again */
	parent->left = binary_tree_node(parent, value);

	return (parent->left);
}
