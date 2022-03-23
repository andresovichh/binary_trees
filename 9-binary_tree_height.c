#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is root
 * @tree: pointer to the root node to traverse from
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t height = 0;

if (!tree)
return (NULL);

for (height = 0; tree->left != NULL && tree->right != NULL; height++)
{

}

}