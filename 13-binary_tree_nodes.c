#include "binary_trees.h"

/*
 * binary_tree_nodes - counts number of nodes
 * *tree - pointer to the root node
 * Return 0 when null and number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 0;

	if (!tree || (!tree->left && !tree->right))
	{
		return (0);
	}
	else
	{
		node += 1;
		node += binary_tree_nodes(tree->left);
		node += binary_tree_nodes(tree->right);
		return (node);
	}
}
