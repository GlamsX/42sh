/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:58:28+02:00
 */

#include "mysh.h"

void swap_list(elem_t *a, elem_t *b)
{
    char *data = NULL;

    if (my_strcmp(a->data, b->data) > 0) {
        data = a->data;
        a->data = b->data;
        b->data = data;
    }
    data = NULL;
}

void sort_list(list_t *list)
{
    elem_t *elem;
    elem_t *elem2;

    for (elem = list->start; elem != NULL; elem = elem->next)
        for (elem2 = elem->next; elem2 != NULL; elem2 = elem2->next)
            swap_list(elem, elem2);
}
