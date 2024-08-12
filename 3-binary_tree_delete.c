#include "binary_trees.h"
#include <stdio.h>

/*binary_tree_t *get_root(binary_tree_t *node);*/

/**
 * binary_tree_delete - deletes the entire given binary tree
 * @tree: the head node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *currentNode = tree;

	if (tree == NULL)
		return;

	if (currentNode->left != NULL)
		currentNode = currentNode->left;
	else if (currentNode->right != NULL)
		currentNode = currentNode->right;
	else
	{
		currentNode = currentNode->parent;
		if (currentNode != NULL)
		{
			if (IS_LEAF(currentNode->left))
			{
				free(currentNode->left);
				currentNode->left = NULL;
			}
			else if (IS_LEAF(currentNode->right))
			{
				free(currentNode->right);
				currentNode->right = NULL;
			}
			/*else*/
			/*	printf("Something went wrong.\n");*/
			if (currentNode->parent == NULL)
			{
				free(currentNode);
				currentNode = NULL;
			}
		}
	}
	binary_tree_delete(currentNode);
}

/*binary_tree_t *get_root(binary_tree_t *node)
{
	if (node->parent == NULL)
		return (node);
	return (get_root(node->parent));
}*/
