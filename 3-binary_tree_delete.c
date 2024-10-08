#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_delete - deletes the entire given binary tree
 * @tree: the head node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree->left != NULL)
		binary_tree_delete(tree->left);
	if (tree->right != NULL)
		binary_tree_delete(tree->right);
	free(tree);
}
