/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:28:18+02:00
 */

#include "mysh.h"
#include "lib.h"
#include "struct_list.h"
#include "env_loc.h"

int my_unset(main_list_t *list, tree_t *tree, char **input)
{
    (void)tree;

    if (get_nb_str_array(input) == 1) {
        my_printf("unset: Too few arguments.\n");
        return (1);
    }
    for (int i = 1; input[i] != NULL; i++) {
        for (int j = 0;  j < list->env_loc->nb_elem; j++) {
            if (strcmp(input[i],
            ((env_loc_t *)list->env_loc->array[j])->var) == 0) {
                remove_elem_at(list->env_loc, j);
                break;
            }
        }
    }
    return (0);
}
