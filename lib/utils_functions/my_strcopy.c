/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:57:08+02:00
 */

#include <stdlib.h>

char *my_strcpy(char *dest, char *src)
{
    int i = 0;

    if (!dest || !src)
        return (NULL);
    for (; src[i]; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}
