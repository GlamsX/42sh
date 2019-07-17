/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:57:32+02:00
 */

#include "mysh.h"

char **my_realloc_2d(char **tab_to, int size)
{
    char **new_str = malloc(sizeof(char *) * (size + 1));
    int c = 0;

    if (tab_to == NULL || size < 1)
        return (NULL);
    for (; c != size && tab_to[c] != NULL; c++)
        new_str[c] = my_strdup(tab_to[c]);
    if (tab_to[c] == NULL)
        while (c < size)
            new_str[c++] = NULL;
    new_str[c] = NULL;
    free_tabs(tab_to);
    return (new_str);
}
