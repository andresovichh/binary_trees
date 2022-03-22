#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is root
 * @node: pointer to the node to check
 * Return: if node is NULL, return 0, if node is root, return 1
 */

int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL)
return (0);

if (node->left != NULL || node->right != NULL)
return (1);

if (node->left == NULL && node->right == NULL)
return (0);

return (0);
}