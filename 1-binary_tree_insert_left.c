#include "binary_trees.h"

/**
 *
 *
 *
 *
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode, *temp;

	newnode = binary_tree_node(parent, value);
	

	if(newnode == NULL)
		return (NULL);
	newnode->n = value;
	
	if(parent == NULL)
		return(NULL);

	if(parent->left != NULL)
	{
		temp = parent->left;
		parent->left = newnode;
		newnode->left = temp;
	}
	return (newnode);
}
