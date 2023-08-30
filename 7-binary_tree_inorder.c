#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Description:
 * This function performs in-order traversal of a binary tree.
 * It first visits the left subtree, then the root node, and finally the right subtree.
 * The function pointed to by `func` is called for each node, passing the node's value as a parameter.
 * If either `tree` or `func` is `NULL`, the function does nothing.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
