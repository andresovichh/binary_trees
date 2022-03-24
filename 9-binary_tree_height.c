#include "binary_trees.h"

/**
 * binary_tree_height - checks if node is root
 * @tree: pointer to the root node to traverse from
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t heightR = 0, heightL = 0;

if (!tree)
return (0);

if (tree->right)
heightR = binary_tree_height(tree->right) + 1;
if (tree->left)
heightL = binary_tree_height(tree->left) + 1;
if (heightL > heightR)
return (heightL);
else
return (heightR);
}
