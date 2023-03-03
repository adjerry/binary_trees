#include "binary_trees.h"
/**
 * array_to_avl - function that builds an AVL tree from an array
 * @array: apointer to the first element of the araay to be converted
 * @size: the number of element in array
 * Return: apointer to the root node of the created avl or null upon failur
 */
avl_t *array_to_avl(int *array, size_t size)
{
avl_t *tree = NULL;
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
if (avl_insert(&tree, array[i]) == NULL)
return (NULL);
}
}
return (tree);
}
