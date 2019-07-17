/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T14:00:39+02:00
 */

#include "include_linked_list/linked_list.h"

void destroy_list(list_t *list)
{
    while (list->size > 1)
        pop_element_at(list, list->size);
}
