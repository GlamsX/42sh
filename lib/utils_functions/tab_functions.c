/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:56:33+02:00
 */

#include "mysh.h"

int my_tablen(char **temp_tab)
{
    int i = 0;

    if (!temp_tab)
        return (0);
    for (; temp_tab[i] != NULL; i++);
    return (i);
}

char **my_tabdup(char **old_tab)
{
    char **new_tab = NULL;

    if (old_tab == NULL)
        return (NULL);
    new_tab = malloc(sizeof(char *) * (my_tablen(old_tab) + 1));
    for (int idx = 0; old_tab[idx] != NULL; ++idx)
        new_tab[idx] = my_strdup(old_tab[idx]);
    new_tab[my_tablen(old_tab)] = NULL;
    return (new_tab);
}

char **my_tabcat(char **tab_a, char **tab_b)
{
    int idx = 0;
    char **new_tab = malloc(sizeof(char *) * \
    (my_tablen(tab_a) + my_tablen(tab_b) + 1));

    if (tab_a != NULL)
        for (; tab_a[idx] != NULL; ++idx)
            new_tab[idx] = my_strdup(tab_a[idx]);
    if (tab_b != NULL)
        for (int n = 0; tab_b[n] != NULL; ++n, ++idx)
            new_tab[idx] = my_strdup(tab_b[n]);
    new_tab[(my_tablen(tab_a) + my_tablen(tab_b))] = NULL;
    return (new_tab);
}
