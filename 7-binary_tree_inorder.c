#include "binary_trees.h"

/**
 * binary_tree_inorder - checks if node is root
 * @tree: pointer to the root node to traverse from
 * @func: s a pointer to a function to call for each node.
 * Return: if node is NULL, return 0, if node is root, return 1
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func)
return;


binary_tree_inorder(tree->left, func);
func(tree->n);
binary_tree_inorder(tree->right, func);
}
