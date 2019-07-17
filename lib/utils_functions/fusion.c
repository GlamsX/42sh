/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:57:50+02:00
 */

#include "lib.h"

char *fusion(char *dest, char *src)
{
    char *final_dest = NULL;
    int i = 0;
    int j = 0;
    int k = 0;

    if (dest != NULL)
        while (dest[i += 1]);
    while (src[j += 1]);
    final_dest = malloc(sizeof(char) * (i + j + 1));
    if (dest != NULL)
        for (; dest[k] != '\0'; k += 1)
            final_dest[k] = dest[k];
    for (int x = 0; src[x] != '\0'; x += 1) {
        final_dest[k] = src[x];
        k += 1;
    }
    final_dest[i + j] = '\0';
    return (final_dest);
}
