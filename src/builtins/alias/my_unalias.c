/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:53:48+02:00
 */

#include "mysh.h"

void unstock_alias(list_t *alias, char **input)
{
    if (alias->end == NULL || alias->start == NULL)
        return;
    for (int idx = 0; input[idx] != NULL; ++idx) {
        input[idx] = remove_quotes_alias(input[idx]);
        remove_if_aliased(alias, input[idx]);
    }
}

int my_unalias(main_list_t *main, tree_t *tree, char **input)
{
    int size = my_tablen(input);
    (void)tree;

    switch (size) {
        case 0: return (-1);
        case 1: write(2, "unalias: Too few arguments.\n", 29); break;
        default: unstock_alias(main->alias, (input + 1)); break;
    }
    return (0);
}
