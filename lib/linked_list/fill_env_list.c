/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T14:00:34+02:00
 */

#include "include_linked_list/linked_list.h"

void fill_env_list(list_t *list, char **environ)
{
    for (int i = 0; environ[i] != NULL; i += 1) {
        insert_element_at(list, environ[i], list->size);
    }
}
