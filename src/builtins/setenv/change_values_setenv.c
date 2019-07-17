/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:26:04+02:00
 */

#include "mysh.h"

void change_value_2(char *elem, char *value, list_t *list, int size)
{
    elem_t *elems = list->start;
    char **env_tab = get_new_env(list);

    for (int i = 0; env_tab[i] != NULL; i++) {
        if (my_strncmp(env_tab[i], elem, size) == 0) {
            env_tab[i] = concat_elem(elem, value);
            break;
        }
    }
    while (elems) {
        pop_front_haroun(list);
        elems = elems->next;
    }
    stock_env(list, env_tab);
    free(env_tab);
}

void change_value(char *elem, char *value, list_t *list, int size)
{
    elem_t *first = list->start;
    elem_t *end = list->end;

    if (my_strncmp(elem, first->data, size) == 0) {
        pop_front_haroun(list);
        push_front_haroun(list, concat_elem(elem, value));
        return;
    }
    if (my_strncmp(elem, end->data, size) == 0) {
        pop_back_haroun(list);
        push_back_haroun(list, concat_elem(elem, value));
        return;
    }
    change_value_2(elem, value, list, size);
}
