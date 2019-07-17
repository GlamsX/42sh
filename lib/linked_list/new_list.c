/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T14:00:14+02:00
 */

#include "include_linked_list/linked_list.h"

list_t *new_list(void)
{
    list_t *list = malloc(sizeof(list_t));

    list->size = 0;
    list->start = NULL;
    list->end = NULL;
    return (list);
}
