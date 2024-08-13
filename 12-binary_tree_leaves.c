#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in the given binary tree
 *
 * @tree: the root node of the tree to count the leaves of
 *
 * Return: the number of leaves in the given tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int i = IS_LEAF(tree);

	if (!i)
		return (0);

	i += binary_tree_size(tree->left);
	i += binary_tree_size(tree->right);

	return (i);
}
