/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:56:41+02:00
 */

#include "lib.h"

char *strcopy_pos(char *str, int begin)
{
    int size = 0;
    char *new_str = NULL;

    for (int j = begin; str[j] != '\0'; size++, j++);
    new_str = malloc(sizeof(char) * size + 1);
    for (int i = 0; str[begin] != '\0'; begin++, i++)
        new_str[i] = str[begin];
    new_str[size] = '\0';
    return (new_str);
}
