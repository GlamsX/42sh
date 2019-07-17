/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:32:59+02:00
 */

#include "mysh.h"

int my_env(main_list_t *main, tree_t *tree, char **input)
{
    (void)input;
    (void)tree;

    for (elem_t *elem = main->env.start; elem != NULL; elem = elem->next)
        my_printf("%s\n", elem->data);
    return (0);
}
