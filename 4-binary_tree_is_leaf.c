#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if the given node is a leaf node.
 * @node: The node to check.
 *
 * Return: 1 if the node is a leaf node, otherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int n = 0;

	if (node != NULL)
	{
		if (node->left == NULL && node->right == NULL)
		{
			n = 1;
		}
		else
		{
			n = 0;
		}
	}
	return (n);
}
