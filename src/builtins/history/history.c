/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:26:34+02:00
 */

#include "mysh.h"

void stock_history(list_t *history, char *str)
{
    if (str)
        push_back_haroun(history, str);
}

int my_history(main_list_t *main, tree_t *tree, char **input)
{
    (void)tree;
    elem_t *elem = main->history.start;
    int i = 1;

    while (elem != NULL) {
        my_printf("%i %s\n", i, elem->data);
        elem = elem->next;
        i++;
    }
    (void)input;
    return (0);
}
