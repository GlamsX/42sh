/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:33:17+02:00
 */

#include "mysh.h"
#include "lib.h"
#include "struct_list.h"

int *get_flags(char **args)
{
    int *flags = malloc(sizeof(int) * 2);

    flags[0] = 0;
    flags[1] = 0;
    for (int i = 1; i < 3; i++) {
        if (my_strcmp(args[i], "-n") == 0)
            flags[n_flag] = true;
        if (my_strcmp(args[i], "-e") == 0)
            flags[e_flag] = true;
    }
    return (flags);
}
