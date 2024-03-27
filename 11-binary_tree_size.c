#include "binary_trees.h"

/**
 * binary_tree_size - A function that measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size of.
 *
 * Return: The size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t t_size = 0;

	if (tree)
	{
		t_size += 1;
		t_size += binary_tree_size(tree->left);
		t_size += binary_tree_size(tree->right);
	}
	return (t_size);
}
