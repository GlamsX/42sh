/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:57:43+02:00
 */

#include "mysh.h"
#include "lib.h"
#include "struct_list.h"

int get_nb_str_array(char **array)
{
    int i = 0;

    for (; array[i] != NULL; i++);
    return (i);
}
