#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the Depth of a Node in a Binary-tree.
 * @tree: Node to CALCULATE the Depth of
 * Return: Depth of the Node
 *         0 if tree is null
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
