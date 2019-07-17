/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:56:50+02:00
 */

#include <stdlib.h>
#include <string.h>

char *str_clean(char *st)
{
    char *new_str = NULL;
    int j = 0;

    if (!st)
        return (NULL);
    new_str = malloc(sizeof(char) * (strlen(st) + 1));
    for (int i = 0; st[i] != '\0'; i++) {
        if ((st[i] != ' ' && st[i] != '\0') || ((st[i] == ' ' || st[i] == '\t')
            && st[i + 1] != ' ' && st[i + 1] != '\t' && st[i + 1] != '\0')) {
            new_str[j] = st[i];
            j++;
        }
    }
    new_str[j] = '\0';
    (new_str[0] == ' ') ? new_str = new_str + 1 : 0;
    return (new_str);
}
