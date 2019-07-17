/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:26:23+02:00
 */

#include "mysh.h"

int check_the_param(char *param)
{
    for (int i = 0; param[i] != '\0'; i++)
        if (!(param[i] >= '0' && param[i] <= '9'))
            return (1);
    return (0);
}

int error_repeat(char **input)
{
    if (my_tablen(input) < 3) {
        my_printf("%s: Too few arguments.\n", input[0]);
        return (1);
    }
    if (my_tablen(input) >= 3 && check_the_param(input[1]) == 1) {
        my_printf("%s: Badly formed number.\n", input[0]);
        return (1);
    }
    return (0);
}
