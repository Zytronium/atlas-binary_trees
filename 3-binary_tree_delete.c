#include "binary_trees.h"
#include <stdio.h>

/*binary_tree_t *get_root(binary_tree_t *node);*/

/**
 * binary_tree_delete - deletes the entire given binary tree
 * @tree: the head node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (IS_LEAF(tree))
	{
		/*binary_tree_t *parent = tree->parent;*/
		free(tree);
		tree = NULL;
		/*binary_tree_delete(parent);*/
	}
	else
		if (tree->left != NULL)
			binary_tree_delete(tree->left);
		else
			binary_tree_delete(tree->right);
}

/*binary_tree_t *get_root(binary_tree_t *node)
{
	if (node->parent == NULL)
		return (node);
	return (get_root(node->parent));
}*/
