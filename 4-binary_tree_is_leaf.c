#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf (has no children)
 *
 * @node: node to check if it is a leaf
 *
 * Return: 1 if	node is a leaf, 0 if it is not (including if it's NULL)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return (!(node == NULL || (node->left != NULL && node->right != NULL)));
}
