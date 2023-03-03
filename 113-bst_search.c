#include "binary_trees.h"
/**
 * bst_search - function that searches for a value in a Binary Search Tree
 * @tree: apointer to the root node the bst to search
 * @value: the value to search for in the bst
 * Return: if the tree is null
 */
bst_t *bst_search(const bst_t *tree, int value)
{
if (tree != NULL)
{
if (tree->n == value)
return ((bst_t *)tree);
if (tree->n > value)
return (bst_search(tree->left, value));
return (bst_search(tree->right, value));
}
return (NULL);
}
