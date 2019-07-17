/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:57:55+02:00
 */

#include <stdlib.h>

void free_vars(char *a, char *b)
{
    if (a != NULL)
        free(a);
    if (b != NULL)
        free(b);
}

void free_tabs(char **tab)
{
    if (!tab || !tab[0])
        return;
    for (int i = 0; tab[i] != NULL; i++)
        free(tab[i]);
    free(tab);
}
