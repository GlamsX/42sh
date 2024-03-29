/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:57:20+02:00
 */

#include <stdlib.h>
#include <string.h>

char *my_strcat(char *str_a, char *str_b)
{
    char *str = NULL;
    unsigned int x = 0;
    unsigned int y = 0;

    if (str_a == NULL || str_b == NULL)
        return (NULL);
    str = malloc(sizeof(char) * (strlen(str_a) + strlen(str_b) + 1));
    for (x = 0; x < strlen(str_a); x++)
        str[x] = str_a[x];
    for (y = 0; y < strlen(str_b); y++) {
        str[x] = str_b[y];
        x++;
    }
    str[x] = '\0';
    return (str);
}
