#include "binary_trees.h"
/**
 * array_to_bst - function that builds a Binary Search Tree from an array
 * @array: a pointer to the first element of the array to be converted
 * @size: the number of elements in array
 * Return: a pointer to the root node of the created BST
 */
bst_t *array_to_bst(int *array, size_t size)
{
bst_t *tree = NULL;
size_t i, j;
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
for (j = 0; j < i; j++)
{
if (array[j] == array[i])
break;
}
if (j == i)
{
if (bst_insert(&tree, array[i]) == NULL)
return (NULL);
}
}
return (tree);
}
