#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is root
 * @tree: pointer to the root node to traverse from
 * @func: s a pointer to a function to call for each node.
 * Return: if node is NULL, return 0, if node is root, return 1
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func)
return;


binary_tree_postorder(tree->left, func);

binary_tree_postorder(tree->right, func);
func(tree->n);
}