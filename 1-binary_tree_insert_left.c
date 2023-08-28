#include "binary_trees.h"

/**
 * binary_tree_insert_left -  Inserts a node as the left-child of another node
 * @parent: parent node of the added node
 * @value: the value to add to the left of the node
 *
 * Return: Pointer to the created node or NULL otherwise
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	if (parent != NULL)
	{
		newNode = malloc(sizeof(binary_tree_t));
		if(newNode != NULL)
		{
			newNode->left = parent->left;
			newNode->right = NULL;
			newNode->parent = parent;
			newNode->n = value;
			if (parent->left != NULL)
			{
				parent->left->parent = newNode;
			}
			parent->left = newNode;
		}
	}
	return (newNode);
}
