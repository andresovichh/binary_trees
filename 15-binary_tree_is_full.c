#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if binary tree is full
 * @tree: pointer to the root node to traverse from
 * Return: the height of the tree
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
if (!tree)
return (0);

if (!tree->left && !tree->right)
return (1);

return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
