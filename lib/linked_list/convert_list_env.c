/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T14:00:44+02:00
 */

#include "include_linked_list/linked_list.h"

char **convert_list_env(list_t *list)
{
    char **environ = malloc(sizeof(char *) * (list->size + 1));
    int i = 0;

    for (elem_t *temp = list->start; temp != NULL; temp = temp->next, i += 1)
        environ[i] = temp->data;
    environ[i] = '\0';
    return (environ);
}
