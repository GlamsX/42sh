/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:23:55+02:00
 */

#include "mysh.h"

int exec_and(tree_t *tree, main_list_t *main_list)
{
    if (do_execution(tree->left, main_list) == 0)
        do_execution(tree->right, main_list);
    return (0);
}

int exec_or(tree_t *tree, main_list_t *main_list)
{
    if (do_execution(tree->left, main_list) != 0)
        do_execution(tree->right, main_list);
    return (0);
}
