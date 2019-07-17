/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:33:30+02:00
 */

#include "mysh.h"
#include "lib.h"
#include "struct_list.h"
#include "env_loc.h"

int is_dollar(char *str, main_list_t *list)
{
    char *command = strcopy_pos(str, 1);

    if (strcmp(command, "?") == 0 || strcmp(command, "$") == 0) {
        free(command);
        return (0);
    }
    if (is_var_env(command, list) == true) {
        return (0);
    }
    if (is_var_env_loc(command, list) == true) {
        free(command);
        return (0);
    }
    my_printf("%s: Undefined variable.\n", command);
    free(command);
    return (1);
}

int echo_error(char **args, int *flags, main_list_t *list)
{
    for (int i = 1; args[i] != NULL; i++) {
        if (args[i][0] == '$' && strlen(args[i]) > 1
        && is_dollar(args[i], list) == 1) {
            free(flags);
            list->value_return = 1;
            return (1);
        }
    }
    return (0);
}
