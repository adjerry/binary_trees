#include "binary_trees.h"
#include "limits.h"
/**
 * is_bst_helper - checks if a binary tree is valid binary search tree
 * @tree: apointer to rood node of the tree to cheack
 * @lo: the value of the smallest node
 * @hi: the value of the largest node
 * Return: if the tree is a valid BST, 1 otherwise, 0.
 */
int is_bst_helper(const binary_tree_t *tree, int lo, int hi)
{
if (tree != NULL)
{
if (tree->n < lo || tree->n > hi)
return (0);
return (is_bst_helper(tree->left, lo, tree->n - 1) 
&& is_bst_helper(tree->right, tree->n + 1, hi));
}
return (1);
}
/**
 * binary_tree_is_bst - checks if a binary tree is a valid
 * @tree: apointer to rood node of the tree to cheack
 * Return: 1 if tree is valid BST, and 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
return (is_bst_helper(tree, INT_MIN, INT_MAX));
}
