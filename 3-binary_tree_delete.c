#include "binary_trees.h"
/**
 * binary_tree_delete - function that deletes an entire binary tree
 * @tree:tree to free
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
{
return:
}
else
{
if (tree != NULL)
{
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);
}
free(tree);
}
}
