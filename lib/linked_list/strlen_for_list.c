/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T14:00:04+02:00
 */

#include "include_linked_list/linked_list.h"

void pop_elem(list_t *list, elem_t *elem)
{
    if (elem == list->end) {
        pop_end(list);
        return;
    } else if (elem == list->start) {
        pop_start(list);
        return;
    }
    if (list != NULL && elem != NULL) {
        elem->prev->next = elem->next;
        elem->next->prev = elem->prev;
        free(elem);
        list->size--;
    }
}

int strlen_for_list(list_t *list)
{
    size_t n = 0;
    elem_t *elem = list->start;

    while (elem != NULL) {
        n++;
        elem = elem->next;
    }
    return (n);
}
