#ifndef BINARY_TREES_H
#define BINARY_TREES_H

/* ↓ LIBRARIES ↓ */
#include <stdio.h>
#include <stdlib.h>
/* ------------------- */

/* ↓ STRUCTS AND MISC ↓ */

/* Basic Binary Tree */
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/* Binary Search Tree */
typedef struct binary_tree_s bst_t;

/* AVL Tree */
typedef struct binary_tree_s avl_t;

/* Max Binary Heap */
typedef struct binary_tree_s heap_t;
/* ------------------- */

/* ↓ FUNCTIONS ↓ */
/* print tree */
static int print_t(const binary_tree_t *tree, int offset, int depth, char **s);
static size_t _height(const binary_tree_t *tree);
void binary_tree_print(const binary_tree_t *tree);
/* ---------- */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
/* ------------------- */

#endif /* BINARY_TREES_H */
