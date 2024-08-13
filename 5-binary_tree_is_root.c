#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 *
 * @node: node to check if it is a leaf
 *
 * Return: 1 if the given node is root, else, 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return (node->parent == NULL);
}
