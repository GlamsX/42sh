/**
 * @Author: la-montagne
 * @Date:   2019-07-17T13:17:52+02:00
 * @Last modified by:   la-montagne
 * @Last modified time: 2019-07-17T13:58:01+02:00
 */

int my_strcmp(char *s1, char *s2);

int find_redirection(char *str)
{
    if (my_strcmp(str, ">") == 0 || my_strcmp(str, ">>") == 0 ||
        my_strcmp(str, "<") == 0 || my_strcmp(str, "<<") == 0)
        return (0);
    return (1);
}

int find_pipes(char *str)
{
    if (my_strcmp(str, "|") == 0)
        return (0);
    return (1);
}

int find_and_or_or(char *str)
{
    if (my_strcmp(str, "||") == 0 || my_strcmp(str, "&&") == 0)
        return (0);
    return (1);
}
