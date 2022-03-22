#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * 
 * parent: parent node 
 * value: Value to put in the new node 
 * Return - binary_tree_t* or NULL 
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *tempNode = malloc(sizeof(binary_tree_t));
binary_tree_t *current;
binary_tree_t *root = parent;

tempNode->n = value;
tempNode->left = NULL;
tempNode->right = NULL;

/** if tree is empty, create root node */
if (root == NULL)
{
    root = tempNode;
}
}