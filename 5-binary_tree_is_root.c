#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if node is root
 * @node: pointer to the node to check
 * Return: if node is NULL, return 0, if node is root, return 1
 */

int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL)
return (0);



if (node->parent == NULL)
return (1);

return (0);
}
