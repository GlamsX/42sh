/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:24:23+02:00
 */

#include "mysh.h"

void stock_env(list_t *list, char **env)
{
    for (int i = 0; env[i] != NULL; i++)
        push_back_haroun(list, env[i]);
}

char *get_from_env(list_t *list, char *info)
{
    elem_t *elem = list->start;

    if (!elem || !info)
        return (NULL);
    while (elem != NULL) {
        if (my_strncmp(elem->data, info, strlen(info)) == 0)
            return (elem->data);
        elem = elem->next;
    }
    return (NULL);
}

char **get_new_env(list_t *list)
{
    char **env_tab = malloc(sizeof(char *) * (strlen_for_list(list) + 1));
    elem_t *elem = list->start;
    int i = 0;

    for (; elem; elem = elem->next, i++)
        env_tab[i] = elem->data;
    env_tab[i] = NULL;
    return (env_tab);
}

char **get_path(list_t *list)
{
    char **path = NULL;
    char *first = NULL;

    first = my_strdup(get_from_env(list, "PATH="));
    if (!first)
        return (NULL);
    path = my_str_to_word_array(first + 5, ':');
    return (path);
}
