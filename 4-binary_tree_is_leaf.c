#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is leaf
 * @node: pointer to the node to check
 * Return: if node is NULL, return 0, if node is leaf, return 1
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
return (0);

if (node->left == NULL && node->right == NULL)
return (1);

return (0);
}
