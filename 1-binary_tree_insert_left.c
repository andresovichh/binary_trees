#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as te left child of another node
 * @parent: parent node
 * @value: Value to put in the new node
 * Return: binary_tree_t* or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *childNode;

/** 
 * childNode = malloc(sizeof(binary_tree_t));
 * if (!childNode)
 * return (NULL);
 */

if (!parent)
return (NULL);
/** create new node usin foo from 0*/
childNode = binary_tree_node(parent, value);

/** check if parent has left child */
if (parent->left != NULL)
{
childNode->left = parent->left;
parent->left->parent = childNode;
parent->left = childNode;
}
else
{
parent->left = childNode;
}

return (childNode);
}
