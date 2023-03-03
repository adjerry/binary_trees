#include "binary_trees.h"
/**
 * binary_tree_rotate_left - function that performs a left-rotation on a binary tree
 * @tree: the root node of the three
 * Return: pointer node of the new node
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
binary_tree_t *pivot;
if (tree == NULL || tree->right == NULL)
{
return (NULL);
}
pivot = tree->right;
tree->right = pivot->left;
if (pivot->left != NULL)
{
pivot->left->parent = tree;
}
pivot->left = tree;
pivot->right = tree->parent;
tree->parent = pivot;
return (pivot);
}	
