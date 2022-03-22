#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as te right child of another node
 * @parent: parent node
 * @value: Value to put in the new node
 * Return: binary_tree_t* or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *childNode = NULL;

/** 
 * childNode = malloc(sizeof(binary_tree_t));
 * if (!childNode)
 * return (NULL);
 */

if (!parent)
return (NULL);
/** create new node usin foo from 0*/
childNode = binary_tree_node(parent, value);

/** check if parent has right child */
if (parent->right != NULL)
{
childNode->right = parent->right;
parent->right->parent = childNode;
parent->right = childNode;
}
else
{
parent->right = childNode;
}

return (childNode);
}
