#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: he tree to measure the size of
 *
 * Return: 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t i = 0;

	_binary_tree_preorder(tree, &i);

	return (i);
}
/**
 * binary_tree_preorder - goes through a binary tree using pre-order
 * traversal & adds 1 to the given number for every node in the tree
 *
 * @tree: 🌲tree🌲
 * @i: pointer to iterator
 */
void _binary_tree_preorder(const binary_tree_t *tree, size_t *i)
{
	if (tree == NULL || i == NULL)
		return;

	(*i)++;

	_binary_tree_preorder(tree->left, i);
	_binary_tree_preorder(tree->right, i);
}

