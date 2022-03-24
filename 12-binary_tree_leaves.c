#include "binary_trees.h"

/**
 * binary_tree_leaves - checks if node is root
 * @tree: pointer to the root node to traverse from
 * Return: the height of the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{

if (!tree)
return (0);

if (tree->left == NULL && tree->right == NULL)
return (1);

return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
