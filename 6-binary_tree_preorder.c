#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using pre-order
 * traversal and performs the given function on each element's value
 *
 * @tree: 🌲tree🌲
 * @func: function pointer for the function to perform on each element's value
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);

}
