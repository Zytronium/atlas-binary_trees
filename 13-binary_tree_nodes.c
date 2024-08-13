#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes in the given binary tree
 *
 * @tree: the root node of the tree to count the nodes of
 *
 * Return: the number of nodes in the given tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t i = !IS_LEAF(tree);

	if (tree == NULL)
		return (0);

	i += binary_tree_nodes(tree->left);
	i += binary_tree_nodes(tree->right);

	return (i);
}
