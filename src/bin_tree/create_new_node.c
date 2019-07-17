/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:55:42+02:00
 */

#include "lib.h"
#include "struct_tree.h"

int *create_fd(void)
{
    int *fd = malloc(sizeof(int) * 2);

    fd[0] = 0;
    fd[1] = 1;
    return (fd);
}

tree_t *create_new_node(char *opera_node)
{
    tree_t *bin_tree = malloc(sizeof(tree_t));

    bin_tree->fd = create_fd();
    bin_tree->opera = NULL;
    bin_tree->command = strclean_spe(opera_node, ' ', 0);
    bin_tree->left = NULL;
    bin_tree->right = NULL;

    return (bin_tree);
}
