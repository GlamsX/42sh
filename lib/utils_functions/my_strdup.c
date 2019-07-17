/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:57:01+02:00
 */

#include <stdlib.h>
#include <string.h>

char *my_strcpy(char *dest, char *src);

char *my_strdup(char *str)
{
    char *new = NULL;

    if (str == NULL)
        return (NULL);
    new = malloc(sizeof(char) * strlen(str) + 1);
    if (new != NULL) {
        my_strcpy(new, str);
        return (new);
    } else
        return (NULL);
}
