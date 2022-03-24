#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node to traverse from
 * Return: the height of the tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t counter = 0;

if (!tree)
return (0);

if (tree->left != NULL || tree->right != NULL)
counter++;
if (tree->left != NULL)
counter += binary_tree_nodes(tree->left);
if (tree->right != NULL)
counter += binary_tree_nodes(tree->right);
return (counter);

}
