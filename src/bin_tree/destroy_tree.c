/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:55:37+02:00
 */

#include "struct_tree.h"
#include "lib.h"

void destroy_tree(tree_t *tree)
{
    if (tree == NULL)
        return;
    if (tree->left != NULL) {
        destroy_tree(tree->left);
    }
    if (tree->right != NULL) {
        destroy_tree(tree->right);
    }
    free(tree->fd);
    free(tree);
}
