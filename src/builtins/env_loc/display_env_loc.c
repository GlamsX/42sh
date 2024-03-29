/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:32:31+02:00
 */

#include "mysh.h"
#include "lib.h"
#include "struct_list.h"
#include "env_loc.h"

void display_last_command(main_list_t *list)
{
    my_printf("_\t");
    (list->history.end->prev != NULL) ?
    my_printf("%s\n\n", list->history.end->prev->data) :
    my_printf("\n");
}

int display_env_loc(main_list_t *list)
{
    display_last_command(list);
    for (int i = 0; i < list->env_loc->nb_elem; i++) {
        my_printf("%s\t", ((env_loc_t *)list->env_loc->array[i])->var);
        if (((env_loc_t *)list->env_loc->array[i])->val != NULL)
            my_printf("%s\n", ((env_loc_t *)list->env_loc->array[i])->val);
        else
            my_printf("\n");
    }
    return (0);
}
