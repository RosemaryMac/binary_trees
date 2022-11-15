#include "main.h"
/*
 * binary_tree_delete - function to delete nodes in a binary tree
 */
void binary_tree_delete(binary_tree_t *node)
{
	if (root == NULL)
		return (0);
	binary_tree_delete(node->left);
	binary_tree_delete(node->right);
	printf("Deleting Node : %d\n", root->data);
	free(root);
}
