#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_delete - deletes the entire given binary tree
 * @tree: the head node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *currentNode = tree;

	if (tree == NULL)
		return;

	while (currentNode->parent != NULL)
	{
		if (currentNode->left != NULL)
			currentNode = currentNode->left;
		else if (currentNode->right != NULL)
			currentNode = currentNode->right;
		else
		{
			binary_tree_t *prevNode = currentNode;
			currentNode = currentNode->parent;
			free(prevNode);
		}
	}
}
