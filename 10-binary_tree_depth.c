#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is root
 * @tree: pointer to the root node to traverse from
 * Return: the height of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t counter = 0;

if (!tree)
return (0);

if (tree->parent)
counter = binary_tree_depth(tree->parent) + 1;

return (counter);
}