#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node to traverse from
 * Return: the height of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int ctr_R = 0;
int ctr_L = 0;

if (!tree)
return (0);

if (tree->left)
ctr_L = binary_tree_height(tree->left);
if (tree->right)
ctr_R = binary_tree_height(tree->right);
return (ctr_L - ctr_R);

}

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
heightR = binary_tree_height(tree->right);
if (tree->left)
heightL = binary_tree_height(tree->left);
if (heightR > heightL)
return (heightR + 1);
else
return (heightL + 1);
}
