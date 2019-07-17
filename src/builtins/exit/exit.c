/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:27:00+02:00
 */

#include "mysh.h"

int my_exit(main_list_t *main, tree_t *tree, char **input)
{
    (void)main;
    (void)tree;
    int ret_value = 0;

    my_printf("exit\n");
    (input[1]) ? (ret_value = atoi(input[1])) : (ret_value = 0);
    exit((unsigned int)ret_value % 256);
    return (0);
}
