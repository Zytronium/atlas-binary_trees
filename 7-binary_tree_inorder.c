#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree using in-order
 * traversal and performs a given function on each element's value
 *
 * @tree: 🌲tree🌲
 * @func: function pointer for the function to perform on each element's value
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	func(tree->n);
}
