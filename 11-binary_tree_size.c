#include "binary_trees.h"

/**
 * binary_tree_size - checks if node is root
 * @tree: pointer to the root node to traverse from
 * Return: the height of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t counter = 0; 
if (!tree)
return (0);

if (tree->left)
counter = binary_tree_size(tree->left) + 1;
if (tree->right)
counter = binary_tree_size(tree->right) + 1;
return (counter);
}