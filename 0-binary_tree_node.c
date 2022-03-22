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
if (tempNode == NULL)
{
return (NULL);
}

tempNode->parent = parent;
tempNode->left = NULL;
tempNode->right = NULL;
tempNode->n = value;
return (tempNode);
}