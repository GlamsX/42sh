/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:55:52+02:00
 */

#include "lib.h"
#include "struct_tree.h"

int add_new_opera_node(tree_t *last_node, char **opera_node, char *opera)
{
    tree_t *new_node_left = create_new_node(opera_node[0]);
    tree_t *new_node_right = create_new_node(opera_node[1]);

    last_node->left = new_node_left;
    last_node->right = new_node_right;
    last_node->opera = opera;
    last_node->command = NULL;
    return (1);
}
