#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: tree to cheak
 * Return: size of tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t size = 0, r = 0, l = 0;
if (tree == NULL)
{
return (0);
}
else
{
l = binary_tree_leaves(tree->left);
r = binary_tree_leaves(tree->right);
size = r + l + 1;
}
return (size);
}
