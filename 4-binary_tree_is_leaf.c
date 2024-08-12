#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf (not the root/head)
 *
 * @node: node to check if it is a leaf or root
 *
 * Return: 1 if	node is a leaf, 0 if it is not (including if it's NULL)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (0);

	return (1);
}
